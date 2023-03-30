//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 3/28/2023
// C2A1E4_StrToUpper.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #1 C2A1E4 (C)
//

#include <stdio.h>

size_t StrToUpper(char destination[], const char source[]) {
    const char *ch = source;
    while (*destination++ = toupper(*source++))
        ;
    return *ch;
}