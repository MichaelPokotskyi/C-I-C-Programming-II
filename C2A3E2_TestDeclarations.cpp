//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/12/2023
// C2A3E2_TestDeclarations.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C2A3E2 (C)
// Since only declarations have been requested, no return statements 
// or test memory allocation provided.

#include <cstdlib>
const int NELEMENTS = 6;

void TestDeclarations() {
    void **aryP[NELEMENTS] {(void**)calloc(NELEMENTS, 0)}; // 1.
    char *fcnA(void *p1);                                  // 2.
    int(*ppa)();                                           // 3.
    int((*&rppa)()) = ppa;                                 // 4.
    ppa = (int(*)())(*aryP);                               // 5.
    return;
}
