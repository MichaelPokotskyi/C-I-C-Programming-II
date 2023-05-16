//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 5/10/2023
// C2A7E4_ProcessStructures.c
// Win10
// Visual C++ 2022, ISO C 17
//
// Assignment #7 C2A7E4(C)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "C2A7E4_Test-Driver.h"

void* ReverseEndian(void* ptr, size_t size);

struct Test* ReverseMembersEndian(struct Test* ptr) {
    // Reverse Endian of each structure member individually
    ReverseEndian((void*)&ptr->flt, sizeof(ptr->flt));
    ReverseEndian((void*)&ptr->dbl, sizeof(ptr->dbl));
    ReverseEndian(&ptr->vp, sizeof(ptr->vp));
    return(ptr);
}
struct Test* ReadStructures(struct Test* ptr, size_t count, FILE* fp) {
    // Read 'count' Test structures from contiguous memory within temporary file
    if (fread(ptr, sizeof(*ptr) * count, 1, fp) != 1)
    {
        fprintf(stderr, "Failed to read structures from temporary file\n");
        exit(EXIT_FAILURE);
    }

    return(ptr);
}
struct Test* WriteStructures(const struct Test* ptr, size_t count, FILE* fp) {
    // Write 'count' Test structures in contiguous memory within temporary file
    if (fwrite(ptr, sizeof(*ptr) * count, 1, fp) != 1)
    {
        fprintf(stderr, "Failed to write structures to temporary file\n");
        exit(EXIT_FAILURE);
    }
    return((struct Test*)ptr);
}