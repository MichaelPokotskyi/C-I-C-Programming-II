//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 5/16/2023
// C2A8E2_OpenFileBinary.c
// Win10
// Visual C++ 2022, ISO C 17
//
// Assignment #8 C2A8E2 (C)
// Opens the file named in fileName using the FILE object.

#include <stdio.h>
#include <stdlib.h>

FILE *OpenFileBinary(const char *fileName) {
    FILE *read;
    // open fail test w message and filename
    if ((read = fopen(fileName, "rb")) == NULL)
    {
        fprintf(stderr, "Open failed: %s\n", fileName);
        exit(EXIT_FAILURE);
    }
    return read;
}
