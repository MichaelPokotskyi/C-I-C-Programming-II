//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/18/2023
// C2A4E1_ComputeAverages.cpp
// Win10
// Visual C++ 2022, ISO C17
// 
// Assignment #4 C2A4E1 (C)
// Calculating nested and linear average 4D array value

#include "C2A4E1_ArraySize.h"

void ComputeAverages(float(*testArray)[DIM1][DIM2][DIM3], 
    float *nestedAvg, float *linearAvg) {
    float t0{ 0 }, t1{ 0 };
    // nested average version
    for (int ix0 = 0; ix0 < DIM0; ++ix0)
    {
        for (int ix1 = 0; ix1 < DIM1; ++ix1)
        {
            for (int ix2 = 0; ix2 < DIM2; ++ix2)
            {
                for (int ix3 = 0; ix3 < DIM3; ++ix3)
                {
                    // update T0 with each array element
                    t0 += testArray[ix0][ix1][ix2][ix3];
                }
            }
        }
    }
    *nestedAvg = t0 / NELEM;
    // linear aveerage version
    for (float *ptr = (float*)testArray;
        ptr < (float*)testArray + DIM0 * DIM1 * DIM2 * DIM3; ++ptr)
    {
        // update T0 with each copied array element
        t1 += *ptr;
    }
    // calculate the average using the linear method by pointer
    *linearAvg = t1 / NELEM;
}
