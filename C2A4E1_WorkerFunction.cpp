//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/18/2023
// C2A2E1_WorkerFunction.cpp
// Win10
// Visual C++ 2022, ISO C17
// 
// Assignment #4 C2A4E1 (C)

// ADD INCLUDE GUARD
#include <iostream>
#include <cstdlib>
#include "C2A4E1_ArraySize.h"

void RandomizeArray(float(*testArray)[DIM1][DIM2][DIM3]);
//void ComputeAverages(float testArray[DIM0][DIM1][DIM2][DIM3], float *nestedAvg, float *linearAvg);

void WorkerFunction(float *nestedAvg, float *linearAvg) {
    static float testArray[DIM0][DIM1][DIM2][DIM3];
    float av = 1;

    for (int i = 0; i < DIM0; ++i) {
        for (int j = 0; j < DIM1; ++j) {
            for (int k = 0; k < DIM2; ++k) {
                for (int l = 0; l < DIM3; ++l) {
                    
                    //std::this_thread::sleep_for(std::chrono::milliseconds(1));
                    testArray[i][j][k][l] = av++;
                }
            }
        }
    }
    
    RandomizeArray(testArray);
    //ComputeAverages(testArray, nestedAvg, linearAvg);

    return;
}