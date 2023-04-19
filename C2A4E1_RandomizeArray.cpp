//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/18/2023
// C2A2E1_RandomizeArray.cpp
// Win10
// Visual C++ 2022, ISO C17
// 
// Assignment #4 C2A4E1 (C)

#include <iostream>
#include <cstdlib>
#include "C2A4E1_ArraySize.h"
using namespace std;

// void RandomizeArray(--One parameter; see the parameter description below--)
void RandomizeArray(float testArray[1][DIM0][DIM1][DIM2][DIM3]) {

    for (int i = 0; i < DIM0; ++i) {
        for (int j = 0; j < DIM1; ++j) {
            for (int k = 0; k < DIM2; ++k) {
                for (int l = 0; l < DIM3; ++l) {
                    cout << testArray[0][i][j][k][l];
                }
                cout << "\n";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    cout << "\n";
    return;
}