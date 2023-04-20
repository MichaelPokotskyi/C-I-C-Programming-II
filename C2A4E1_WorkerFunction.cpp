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
// Declares a local, automatic, 4-dimensional array of float named testArray
// Makes the exact function call RandomizeArray(testArray) and 
// ComputeAverages(testArray, nestedAvg, linearAvg)

#include <iostream>
#include <cstdlib>
#include "C2A4E1_ArraySize.h"

void WorkerFunction(float *nestedAvg, float *linearAvg) {
    static float testArray[DIM0][DIM1][DIM2][DIM3];
    RandomizeArray(testArray);
    ComputeAverages(testArray, nestedAvg, linearAvg);
}
