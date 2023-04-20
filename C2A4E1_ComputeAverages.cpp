//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/18/2023
// C2A2E1_ComputeAverages.cpp
// Win10
// Visual C++ 2022, ISO C17
// 
// Assignment #4 C2A4E1 (C)
// Calculating nested and linear average 4D array value

#include "C2A4E1_ArraySize.h"

void ComputeAverages(float(*testArray)[DIM1][DIM2][DIM3], float* nestedAvg, float* linearAvg) {
    float T0{0}, T1{0}, *ptr;
    // nested average version
    for (int i = 0; i < DIM0; ++i)
    {
        for (int j = 0; j < DIM1; ++j)
        {
            for (int k = 0; k < DIM2; ++k)
            {
                for (int l = 0; l < DIM3; ++l)
                {
                    T0 += testArray[i][j][k][l];
                }
            }
        }
    }
    *nestedAvg = T0 / NELEM;
    // linear aveerage version
    for (ptr = (float*)testArray; ptr < (float*)testArray + DIM0 * DIM1 * DIM2 * DIM3; ++ptr)
        T1 += *ptr;
    // calculate the average using the linear method by pointer
    *linearAvg = T1 / NELEM;
}
