//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/25/2023
// C2A5E2_Create2D.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #5 C2A5E2 (C)
//

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include "C2A5E2_Type-Driver.h"

Type** Create2D(size_t rows, size_t cols) {

    Type *p0, **p1, **p2, **end;
    size_t ttl = (rows * cols) * sizeof(Type);
    p1 = malloc(ttl * sizeof(Type*));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            p1 = p2
        }
    }

    // p1 = (Type**)p0;
    //for (end = p1 + ) {}



    /*Type *p0, **p1, **p2, **end;
    if ((p0 = malloc(rows * sizeof(Type*))) == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    p1 = (Type**)p0;
    cols *= sizeof(Type);
    p0 = NULL;
    if ((p0 = malloc(cols)) == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    for (end = p1 + rows, p2 = p1; p2 < end; ++p2)
    {
        *p2 = (Type*)p0;
    }
    return p1;*/
    return p1;
}

void Free2D(void* p) {
    
}
