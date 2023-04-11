//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/5/2023
// C2A2E6_Reverse.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #2 C2A2E4 (C)
// 

#include <iostream>
#include <fstream>
using namespace std;

bool isSep(char ch) {
    if ( isspace(ch) == 0 || ch == '.' || ch == '?' || ch == '!' || ch == ',' ||ch == ':' || ch == ';' || ch ==  EOF)
    {
        return false;
    }
    else 
    {
        return true;
    }
 }

int Reverse(ifstream &inFile, const int level) {
    int thisChar = inFile.get();
    if (isSep(thisChar))
    {
        return thisChar;
    }
    else 
    {
        int thisSeparator = Reverse(inFile, level + 1);
        if () {}
        else {}
     
    }
}