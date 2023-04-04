////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 3/28/2023
//// C2A1E7_Employee.cpp
//// Win10
//// Visual C++ 2022, ISO C++ 17
//// Assignment #1 C2A1E7 (C)
//// Function Set counting bytes to allocate, dyncmically allocate them,
//// assigning name_ pointer to memory and copying data into that memory.
//
//#include "C2A1E7_Employee.h"
//#include <iostream>
//const int TERM_CHAR = 1;
//using namespace std;
//
//void Employee::Set(const char *ptr) {
//    // string size plus terminator character
//    size_t lng = strlen(ptr) + TERM_CHAR;
//    // dynamic allocation + testing if failed
//    if ((name_ = new (nothrow) char[lng]) == NULL)
//    {
//        // exit if fail
//        cerr << "Memory allocation failed!\n";
//        exit(EXIT_FAILURE);
//    }
//    // copying original data to allocated block
//    memcpy(name_, ptr, lng);
//}
