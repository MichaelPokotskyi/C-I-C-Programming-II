////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/10/2023
//// C2A7E4_ProcessStructures.c
//// Win10
//// Visual C++ 2022, ISO C 17
////
//// Assignment #7 C2A7E4(C)
//// Reversing and manipulating test stucture, writinag and reading temp file.
//// My answers:
//// 1. Were the results you got correct for your implementation?
//// Each sequence of reversrd bytes are corresponding original version for each
//// element, for example Element 0:
////                              cd cc bc 41
////                              41 bc cc cd
////                                         so I suppose my results are correct.
//// (hopefully, I understand question #1 in right context)
//// 
//// 2. How many padding bytes were in your structure?
//// Each structure has 20 bytes by sum of members but structure element has 24
//// byte size, so 4 bytes were added as padding (to float). In provided Driver
//// file I see two arrays of structures three elements each, so total padding
//// bytes should be:
//// 2 X 3 X 4 = 24 bytes
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "C2A7E4_Test-Driver.h"
//#define NUM0NE 1
//
//void *ReverseEndian(void *ptr, size_t size);
//
//struct Test *ReverseMembersEndian(struct Test *ptr) {
//    // convert each structure member
//    ReverseEndian((void *)&ptr->flt, sizeof(ptr->flt));
//    ReverseEndian((void *)&ptr->dbl, sizeof(ptr->dbl));
//    ReverseEndian(&ptr->vp, sizeof(ptr->vp));
//    return(ptr);
//}
//struct Test *ReadStructures(struct Test *ptr, size_t count, FILE *fp) {
//    // Read structures from temp file + read test
//    if (fread(ptr, sizeof(*ptr) * count, NUM0NE, fp) != NUM0NE)
//    {
//        fprintf(stderr, "Fail to read from temporary file\n");
//        exit(EXIT_FAILURE);
//    }
//    return(ptr);
//}
//struct Test *WriteStructures(const struct Test *ptr, size_t count, FILE *fp) {
//    // write structures as binary to temporary file + write test
//    if (fwrite(ptr, sizeof(*ptr) * count, NUM0NE, fp) != NUM0NE)
//    {
//        fprintf(stderr, "Fail to write to temporary file\n");
//        exit(EXIT_FAILURE);
//    }
//    return((struct Test *)ptr);
//}
