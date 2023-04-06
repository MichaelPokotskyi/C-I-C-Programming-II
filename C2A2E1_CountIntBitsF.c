//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/5/2023
// C2A2E1_CountIntBitsF.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #2 C2A2E1 (C)
// Determines the number of bits used to represent a type int value 
// on any machine on which it is run.

// The value produced on the same implementation from two 
// functions from current assigning cannot be different, since 
// any int value will be stored at exactly same bytes size.

int CountIntBitsF(void) {
    int count = 0;
    // loop controlling bits leftshifting
    for (unsigned int bits_num = 1; bits_num != 0; bits_num <<= 1)
    {
        // updating counter of bits
        ++count;
    }
    return count;
}
