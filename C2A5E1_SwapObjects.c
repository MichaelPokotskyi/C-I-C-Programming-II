////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 4/25/2023
//// C2A5E1_SwapObjects.c
//// Win10
//// Visual C++ 2022, ISO C17
////
//// Assignment #3 C2A5E1 (C)
//// SwapObjects dynamically allocates memory size and swapping two pointers
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void SwapObjects(void *pa, void *pb, size_t size) {
//    void *temp;
//    // memory allocation and testing allocation fail
//    if ((temp = malloc(size)) == NULL)
//    {
//        fprintf(stderr, "Memory allocation error\n");
//        exit(EXIT_FAILURE);
//    }
//    // pa to temp
//    memcpy(temp, pa, size);
//    // pa to pb
//    memcpy(pa, pb, size);
//    // temp to pb
//    memcpy(pb, temp, size);
//    // free temp
//    free(temp);
//}
