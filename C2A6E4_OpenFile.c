//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 5/2/2023
// C2A6E4_OpenFile.c
// Win10
// Visual C++ 2022, ISO C 17
//
// Assignment #6 C2A6E4 (C)
// Opens the file named in fileName using the FILE object.

#include <stdio.h>
#include <stdlib.h>

FILE *OpenFile(const char *fileName) {
    FILE *read;
    // open fail test
    if ((read = freopen(fileName, "r", stdin)) == NULL)
    {
        perror("Open failed: ", fileName, "\n");
        exit(EXIT_FAILURE);
    }
    return read;
}
