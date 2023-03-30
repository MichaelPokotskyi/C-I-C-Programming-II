//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 3/28/2023
// C2A1E3_FindFirstInt.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #1 C2A1E3 (C)
// FindFirstInt find the first occurrence of the value
// represented by value in the array represented ptr. If the value is found
// a pointer to that element is returned. Otherwise, a null pointer is returned.

#include <stdio.h>

int *FindFirstInt(const int *ptr, size_t count, int value) {
    //loop to iterating array elements
    for (size_t it = 0; it < count; ++it)
    {
        //if given element found
        if (ptr[it] == value)
        {
            //cast returning type "pointer to int" from "pointer to const int"
            return (int *)&ptr[it];
        }
    }
    //if not found
    return NULL;
}
