//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 5/16/2023
// C2A8E2_DisplayModifiedSingleReals.c
// Win10
// Visual C++ 2022, ISO C 17
//
// Assignment #8 C2A8E2 (C)
// Function displays an aligned table in which each 32-bit pattern is
// represented by an 8-character hexadecimal value(letters may be uppercase or
// lowercase) followed by what that value represents if interpreted as a
// Modified Single Real.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define F_NORM    1              //pattern is normalized number
#define F_DENORM  2              //pattern is denormalized number
#define F_PZERO   3              //pattern is positive zero
#define F_NZERO   (-F_PZERO)     //pattern is negative zero
#define F_PINF    4              //pattern is positive infinity
#define F_NINF    (-F_PINF)      //pattern is negative infinity
#define F_PNAN    5              //pattern is positive NAN
#define F_NNAN    (-F_PNAN)      //pattern is negative NAN

#define SIGN_MASK 0x80000000uL   //sign field bit mask
#define EXP_MASK  0x7FC00000uL   //exponent field bit mask
#define FRAC_MASK 0x003FFFFFuL   //fraction field bit mask
#define FRAC_BITS 22             //bits in fraction field (NEW!)
#define EXP_NBIAS 255            //normalized number exponent bias (NEW!)
#define EXP_DBIAS 254            //denormalized number exponent bias (NEW!)
#define EXP_MAX   511            //exp MAX (NEW!)

#define BUFSIZE 4                //read buffer size
#define BASE    2.0              //binary

int EvalSingleReal(unsigned long pattern, double *result);

void DisplayModifiedSingleReals(FILE *inFile) {
    unsigned char buf[BUFSIZE];
    while (fread(buf, 1, BUFSIZE, inFile))
    {
        unsigned long pattern = 0;
        int status;
        double result;
        char *formatType;
        char *signD;
        if (feof(inFile))
        {
            printf("Unexpected EOF\n");
            break;
        }
        // output original value
        printf("0x");
        for (int byteIx = 0, shiftIx = BUFSIZE - 1; byteIx < BUFSIZE;
            ++byteIx, --shiftIx)
        {
            // output bits
            printf("%02x", buf[byteIx]);
            // bit shifting BIG ENDIAN format
            pattern |= buf[byteIx] << (CHAR_BIT * shiftIx);
        }
        //determine modified value and its represenation
        status = EvalSingleReal(pattern, &result);
        // sign
        if (status > 0) 
        {
            signD = "+";
        }
        else 
        {
            signD = "-";
        }
        // message depends from status
        switch (abs(status))
        {
        case F_NORM:
            formatType = "Normal";
            break;
        case F_DENORM:
            formatType = "Denormal";
            break;
        case F_PZERO:
            formatType = "Zero";
            break;
        case F_PINF:
            formatType = "INF";
            break;
        case F_PNAN:
            formatType = "NAN";
            break;
        default:
            formatType = "ERROR";
        }
        // check sign
        if (abs(status) <= F_PZERO)
        {
            if (result < 0) 
            {
                signD = "";
            }
            printf(" %s%e  %s\n", signD, result, formatType);
        }
        //  representation INF/NAN
        else
        {
            printf(" %s%s\n", signD, formatType);
        }
    }
}
// NOTE 16.10E
int EvalSingleReal(unsigned long pattern, double *result) {
    int signIsNegative = !!(SIGN_MASK & pattern);     //true if negative value
    int exponent = (EXP_MASK & pattern) >> FRAC_BITS; //value of exponent field
    long fraction = FRAC_MASK & pattern;              //value of fraction field
    int status;

    if (exponent == 0 && fraction == 0)               //neg pos test
    {
        status = signIsNegative ? F_NZERO : F_PZERO;
        *result = 0.;                                 //computed value
    }
    else if (exponent == EXP_MAX && fraction == 0)    //test neg pos infinities
    {    
        status = signIsNegative ? F_NINF : F_PINF;
    }
    else if (exponent == EXP_MAX && fraction != 0)    //test neg pos NAN
    {
        status = signIsNegative ? F_NNAN : F_PNAN;    //normalized denormalized
    }
    else                                              
    {
        int bias;
        *result = fraction * pow(BASE, -FRAC_BITS);   //find fractional value
        if (exponent != 0)                            //normalized number
        {
            bias = EXP_NBIAS;                         //bias
            status = F_NORM;
            ++*result;                                //add implicit 1 int part
        }
        else                                          //denormalized Number
        {
            bias = EXP_DBIAS;
            status = F_DENORM;
        }
        *result *= pow(BASE, exponent - bias);        //mantissa *= base to exp
        if (signIsNegative)                           //neg?
        {
            *result = -*result;                       //negate the value
        }
    }
    return status;
}
