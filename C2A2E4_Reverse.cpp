//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/5/2023
// C2A2E4_Reverse.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #2 C2A2E4 (C)
// 

#include<iostream>
#include<fstream>
const int LASTCHAR = 1;
const int NEXTTOLASTCHAR = 3;
using namespace std;


bool isSep(char ch) {
    if (isspace(ch))
    {
        return false;
    }
    switch (ch) 
    {
    case '.':
    case '?':
    case '!':
    case ',':
    case ':':
    case ';':
    case EOF:
        return false;
    default:
        return true;
    }
 }

int Reverse(ifstream &inFile, const int level) {
    int thisChar = inFile.get();
    if (!isSep(thisChar))
    {
        return thisChar;
    }
    else 
    {
        int thisSeparator = Reverse(inFile, level + 1);
        if (level == NEXTTOLASTCHAR || level == LASTCHAR)
        { 
            cout.put((char)toupper(thisChar));
        }
        else
        { 
            cout.put(char(thisChar));
        }
        return thisSeparator;
    }
}
