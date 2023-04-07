//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/5/2023
// C2A2E2_CountIntBitsF.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #2 C2A2E2 (C)
// Determines the number of bits used to represent a type unsigned int value 
// on any machine on which it is run.

int CountIntBitsF() {
    int count = 0;
    // loop controlling bits leftshifting
    for (unsigned int bytes = 1; bytes != 0; bytes <<= 1)
    {
        // updating counter of bits
        ++count;
    }
    return count;
}
