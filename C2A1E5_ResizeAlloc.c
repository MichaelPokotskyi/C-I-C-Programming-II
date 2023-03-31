//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 3/28/2023
// C2A1E5_ResizeAlloc.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #1 C2A1E5 (C)
// 

#include <stdio.h>
#include <malloc.h>
#include <string.h>

void* ResizeAlloc(void* pOld, size_t newSize, size_t oldSize) {
    //Declare pointer to new block
    void* new;
    if (newSize == 0) {
        return NULL;
    }
    else {
        if ((new = malloc(newSize)) == NULL) {
            return NULL;
        }
        else{
            if (pOld == NULL) {
                return new;
            }
            else {
                if (newSize > oldSize) {
                    memcpy(new, pOld, oldSize);
                }
                else {
                    memcpy(new, pOld, newSize);
                }
            }
        }
    }
    free(pOld);
    return new;
}