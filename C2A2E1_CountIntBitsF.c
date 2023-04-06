//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/5/2023
// C2A2E1_CountBitsF.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #2 C2A2E1 (C)
// Determines the number of bits used to represent a type int value 
// on any machine on which it is run.

int CountIntBitsF(void) {
    int count = 0;
    unsigned int x = 1;
    for (;x != 0;)
    {
        // leftshifting by one
        x <<= 1;
        //counting bytes
        count++;
    }
    return count;
}