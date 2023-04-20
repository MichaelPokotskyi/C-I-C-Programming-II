//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/18/2023
// C2A4E1_RandomizeArray.cpp
// Win10
// Visual C++ 2022, ISO C17
// 
// Assignment #4 C2A4E1 (C)
// Seeds the random generator and initializes each element of the 4D array

// rand required iostream
#include <iostream>
#include "C2A4E1_ArraySize.h"

void RandomizeArray(float(*testArray)[DIM1][DIM2][DIM3]) {
    for (int ix0 = 0; ix0 < DIM0; ++ix0)
    {
        for (int ix1 = 0; ix1 < DIM1; ++ix1)
        {
            for (int ix2 = 0; ix2 < DIM2; ++ix2)
            {
                for (int ix3 = 0; ix3 < DIM3; ++ix3)
                {
                    // assigning random value to each accessed element
                    testArray[ix0][ix1][ix2][ix3] = (float)rand();
                }
            }
        }
    }
}
