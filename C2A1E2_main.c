//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 3/28/2023
// C2A1E2_main.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #1 C2A1E2 (C)

#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("%d", argc);
    printf("\n");
    for (int count = 0; count < argc; count ++) 
    {
        printf(argv[count]);
        printf("\n");
    }
    return 0;
}
