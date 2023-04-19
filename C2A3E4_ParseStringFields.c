////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 4/12/2023
//// C2A3E4_ParseStringFields.c
//// Win10
//// Visual C++ 2022, ISO C17
////
//// Assignment #3 C2A3E4 (C)
//// 
//// Reads input from the text file in fp one line at a time and uses
//// the strtok function to find each delimited field and display it
//// on a separate output line
//
//#define BUF_SIZE 256
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//void ParseStringFields(FILE *fp) {
//    char *del = "AEIOUaeiou\t\n";
//    char buf[BUF_SIZE];
//    // line at a time from file
//    while (fgets(buf, BUF_SIZE, fp) != NULL)
//    {
//        //proceed each line
//        char *ch = strtok(buf, del);
//        while (ch != NULL) 
//        {
//            int count = 0;
//            // terminator or "isspace" whitespace
//            while (ch[count] != '\0' && isspace(ch[count]))
//            {
//                count++;
//            }
//            printf("%s\n", (ch + count));
//            ch = strtok(NULL, del);
//        }
//    }
//    return;
//}
