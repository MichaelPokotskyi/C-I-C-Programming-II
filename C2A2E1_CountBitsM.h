//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/5/2023
// C2A2E1_CountBitsM.h
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #2 C2A2E1 (C)
// Determines the number of bits of storage used for the data type 
// of objectOrType on any machine on which it is run.

#include <limits.h>
// Include guard to avoid multiple includes
#ifndef C2A2E1_COUNTBITSM_H
#define C2A1E1_COUNTBITSM_H

#define CountBitsM(objectOrType) ((sizeof(objectOrType)) * (CHAR_BIT))

#endif // C2A2E1_COUNTBITSM_H
