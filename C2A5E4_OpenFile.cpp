//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/25/2023
// C2A5E4_OpenFile.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #5 C2A5E4 (C)
// Opens the file named in fileName using the inFile object.

#include <iostream>
#include <fstream>
using namespace std;

void OpenFile(const char *fileName, ifstream &inFile) {
    inFile.open(fileName, std::ifstream::in);
    // open fail test
    if (!inFile.is_open())
    {
        cerr << "Open failed: " << fileName << "\n";
        exit(EXIT_FAILURE);
    }
}