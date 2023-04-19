//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/18/2023
// C2A2E1_ArraySize.h
// Win10
// Visual C++ 2022, ISO C17
// 
// Assignment #4 C2A4E1 (C)

// The first four represent a 4-dimensional array’s dimension lengths, 
// which left-to-right must be 10, 7, 6, and 8.
const int DIM0 = 10;
const int DIM1 = 7;
const int DIM2 = 6;
const int DIM3 = 256; // 107 520 TOTAL

// The 5th represents the array’s total element count. Its value must be expressed only in terms of
// the four previous dimension size variables – not as a literal numeric value.
const int NELEM = DIM0 * DIM1 * DIM2 * DIM3;

