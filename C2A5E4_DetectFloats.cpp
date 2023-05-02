//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/25/2023
// C2A5E4_DetectFloats.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #5 C2A5E4 (C)
//

#include "C2A5E4_StatusCode-Driver.h"
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//StatusCode DetectFloats(const char *chPtr) {
//    StatusCode t = FAIL;
//    int length = sizeof(chPtr);
//    for (int pos = 0; length > 0; pos++, length--)
//    {
//        switch (*chPtr)
//        {
//        case '0':
//            switch (*chPtr);
//        }
//        
//    }
//    // cout << chPtr << "\n";*/
//    // cout << sizeof(chPtr) - 1;
//    return t;
//}

StatusCode DetectFloats(const char* chPtr) {
    enum 
    { 
        START, PREFIX_START, PREFIX, NO_WHOLE, WHOLE, FRACT, BINARY_EX, SIGN, NUM, FLOAT_SUFF, LONG_D 
    }
    state = START;
    //variable to step through each character in the string as it goes//from state to stateint 
    int el = 0;
    for (;;)
    {
        //determines what type of (OFL) the string is, if the string is a OFLswitch
        switch (state) 
        {
        case START:
            switch (chPtr[el])
            { 
            case '0':
            state = PREFIX_START; 
            break;
            default : return FAIL;
            }
        break; 
        case PREFIX_START:
            switch (chPtr[el])
            {
            case 'o': case 'O':
            state = PREFIX; 
            break;
            default : return FAIL;
            }
        break;
        case PREFIX:
            switch (chPtr[el])
            {
            case '.':state = NO_WHOLE;
            break; 
            case '0': case '1': case '2': case '3': 
            case '4':case '5': case '6': case '7':
                state = WHOLE;
                break; 
            default : return FAIL;
            }
        break;
        case NO_WHOLE:
            switch (chPtr[el])
    
      
    } // first switch curly brace

}

