////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/2/2023
//// C2A6E3_DisplayClassStatus.c
//// Win10
//// Visual C++ 2022, ISO C17
////
//// Assignment #6 C2A6E3 (C)
//// Set of functions working with qsort and bsearch standard library functions.
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// Compares the names represented by arguments using the function strcmp.
//int Compare(const void *elemA, const void *elemB) {
//    return strcmp(*(char **)elemA, *(char **)elemB);
//}
//// Uses the qsort function and the Compare function above to sort the array in
//// studentList into alphabetical order.
//void SortStudents(const char *studentList[], size_t studentCount) {
//    qsort((void *)studentList, studentCount, sizeof(studentList[0]), Compare);
//}
//// Determines and displays which of the registrants did not attend the meeting
//// and which of the attendees were not registered calling the bsearch function.
//void DisplayClassStatus(const char *registrants[], size_t registrantCount,
//                        const char *attendees[], size_t attendeeCount) {
//    printf("Not present:\n");
//    // iterating each registrants elements in attendees
//    for (size_t iter_reg = 0; iter_reg < registrantCount; ++iter_reg)
//    {
//        void *notfound;
//        notfound = bsearch(&registrants[iter_reg], attendees,
//            attendeeCount, sizeof(attendees[0]), Compare);
//        // output if not found
//        if (notfound == NULL)
//        {
//            printf("%s\n", registrants[iter_reg]);
//        }
//    }
//    printf("Not registered:\n");
//    // iterating each attendees elements in registrants
//    for (size_t iter_att = 0; iter_att < attendeeCount; ++iter_att)
//    {
//        void *notfound;
//        notfound = bsearch(&attendees[iter_att], registrants, 
//            registrantCount, sizeof(registrants[0]), Compare);
//        // output if not found
//        if (notfound == NULL)
//        {
//            printf("%s\n", attendees[iter_att]);
//        }
//    }
//}
