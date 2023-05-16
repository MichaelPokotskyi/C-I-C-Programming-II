////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/10/2023
//// C2A7E4_OpenTemporaryFile.c
//// Win10
//// Visual C++ 2022, ISO C 17
////
//// Assignment #7 C2A7E4(C)
//// Opens a temporary file using the standard library tmpfile function.
//// If the open fails an error message is output to stderr and the program
//// is terminated with an error exit code.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//FILE *OpenTemporaryFile(void) {
//    FILE *source;
//    // open fail test with tmpfile
//    if ((source = tmpfile()) == NULL)
//    {
//        fprintf(stderr, "T?MP file fail to open\n");
//        exit(EXIT_FAILURE);
//    }
//    return(source);
//}
