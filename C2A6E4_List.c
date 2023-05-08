//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 5/2/2023
// C2A6E4_List.c
// Win10
// Visual C++ 2022, ISO C 17
//
// Assignment #6 C2A6E4 (C)

#include <stdio.h>
#include <stdlib.h>
#include "C2A6E4_List-Driver.h"
#define BUF_SIZE 256

List* CreateList(FILE* fp) {
    char buf[BUF_SIZE];
    List* head = NULL;
    // line at a time from file
    while (fgets(buf, BUF_SIZE, fp) != NULL)
    {
       printf("%s", buf);
    }
    return head;
}

List* PrintList(const List* head) {
    for (const List* table = head; table != NULL; table = table->next)
    {
        printf("%-15s%4d ea\n", table->str, table->count);
    }
    return((List*)head);
}

void FreeList(List* head) {
    while (head->next != NULL) {
        List *clear = head->next;
        free(head->str);
        free(head);
        head = clear;}
    free(head->str);
    free(head);
}
