//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/12/2023
// C2A3E4_OpenFile.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #3 C2A3E4 (C)
// 
// Opens the file named in fileName in the read - only text mode. If the open
// fails an error message is output to stderr and the program is terminated
// with an error exit code.

#include <stdio.h>
#include <stdlib.h>

FILE *OpenFile(const char *fileName) {
    FILE *fp;
    // open "read only" and failure test with message
    if ((fp = fopen(fileName, "r")) == NULL)
    {
        fprintf(stderr, "Open file %s are failed!\n", fileName);
        exit(EXIT_FAILURE);
    }
    return fp;
}
