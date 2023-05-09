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
// CreateList, PrintList, FreeList functions manipulating singled Linked List

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "C2A6E4_List-Driver.h"

#define BUF_SIZE 256
#define DELIM " \n"
#define TERM 1

List *CreateList(FILE *fp) {
    char buf[BUF_SIZE];
    List *head = NULL;
    // line at a time from file
    while (fgets(buf, BUF_SIZE, fp) != NULL)
    {
        for (char *token = strtok(buf, DELIM); token != NULL;
            token = strtok(NULL, DELIM))
        {
            while (isspace(*token))
            {
                ++token;
            }
            // found counter, reset each loop iteration
            size_t found = 0;
            for (List *count_token = head; count_token != 0; 
                count_token = count_token->next)
            {
                // comparing tokens, updating counter and found flag
                if (!strcmp(token, count_token->str)) 
                {
                    count_token->count++;
                    found++;
                    break;
                }
            }
            if (!found)
            {
                List *new_node;
                // memory allocation test w message
                if ((new_node = (List *)malloc(sizeof(List))) == NULL)
                {
                    fprintf(stderr, "New NODE memory allocation fail!\n");
                    exit(EXIT_FAILURE);
                }
                // token size are taken
                size_t token_size = strlen(token);
                // memory allocation test w message
                if ((new_node->str = (char *)malloc(sizeof(token[0])
                    * token_size + TERM)) == NULL) // !!
                {
                    fprintf(stderr, "STRING in NODE memory allocation fail!\n");
                    exit(EXIT_FAILURE);
                }
                // copying token to allocated memory
                memcpy((void *)new_node->str, (void *)token, 
                    token_size + TERM); //!!
                new_node->count = TERM; // !!
                // pushing node to List
                new_node->next = head;
                head = new_node;
            }
        }
    }
    return head;
}

List *PrintList(const List *head) {
    // building formatted output table
    for (const List *table = head; table != NULL; table = table->next)
    {
        printf("%-15s%4d ea\n", table->str, table->count);
    }
    return((List *)head);
}

void FreeList(List *head) {
    do 
    {
        // clear List
        List *clear = head->next;
        free(head->str);
        free(head);
        head = clear; 
    } 
    while (head->next != NULL);
    // clear head with no "NULL dereferencing" warning
    if (head != NULL) 
    {
        free(head->str);
        free(head);
    }
}
