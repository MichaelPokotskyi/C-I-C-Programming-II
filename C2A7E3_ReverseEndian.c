////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/2/2023
//// C2A7E3_ReverseEndian.c
//// Win10
//// Visual C++ 2022, ISO C 17
////
//// Assignment #7 C2A7E3(C)
//// Converts any scalar object pointed to by ptr from big endian to little
//// endian (or vice versa) by swapping its bytes.
//
//#include <stdlib.h>
//#define ONEREP 1 // no magic numbers
//void *ReverseEndian(void *ptr, size_t size)
//{
//    // swap byte by byte
//    for (char *head = (char *)ptr, *tail = head + size - ONEREP;
//        tail > head; --tail, ++head)
//    {
//        char tmp = *head;
//        *head = *tail;
//        *tail = tmp;
//    }
//    // return pointer
//    return(ptr);
//}
