////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 4/25/2023
//// C2A5E2_Create2D.c
//// Win10
//// Visual C++ 2022, ISO C17
////
//// Assignment #5 C2A5E2 (C)
//// Creates a 2-dimensional pointer array of type Type having the number of rows
//// and columns. All memory needed for this array is dynamically allocated at 
//// once using a single call to malloc.
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "C2A5E2_Type-Driver.h"
//
//Type **Create2D(size_t rows, size_t cols) {
//    // total size to allocate
//    size_t ttl = rows * sizeof(Type *) + rows * cols * sizeof(Type);
//    Type *p;
//    // for single allocation
//    Type **pSingle;
//    // memory allocating with failure test
//    if ((pSingle = (Type **)malloc(ttl)) == NULL)
//    {
//        fprintf(stderr, "Memory allocation failed\n");
//        exit(EXIT_FAILURE);
//    }
//    p = (Type *)(pSingle + rows);
//    for (size_t elem = 0; elem < rows; ++elem)
//    {
//        pSingle[elem] = p + cols * elem;
//    }
//    return pSingle;
//}
//
//void Free2D(void *p) {
//    // free memory allocation
//    free(p);
//}
