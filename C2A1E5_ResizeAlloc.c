////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 3/28/2023
//// C2A1E5_ResizeAlloc.c
//// Win10
//// Visual C++ 2022, ISO C17
////
//// Assignment #1 C2A1E5 (C)
//// ResizeAlloc either dynamically allocates an entirely new
//// block of memory containing newSize bytes or, resizes an
//// existing block.
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void *ResizeAlloc(void *pOld, size_t newSize, size_t oldSize) {
//    // Declare void pointer to new memory allocation block
//    void *pNew;
//    if (newSize == 0) {
//        return NULL;
//    }
//    else {
//        // Memory allocation + allocation fail tesing
//        if ((pNew = malloc(newSize)) == NULL) {
//            return NULL;
//        }
//        else {
//            // Return newSize allocation when given ptr are NULL
//            if (pOld == NULL) {
//                return pNew;
//            }
//            else {
//                // Resizing and copying data into new memory block
//                if (newSize > oldSize) {
//                    memcpy(pNew, pOld, oldSize);
//                }
//                else {
//                    memcpy(pNew, pOld, newSize);
//                }
//            }
//        }
//    }
//    free(pOld);
//    return pNew;
//}
