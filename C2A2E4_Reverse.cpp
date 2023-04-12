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
// Recursively reads one character at a time from the text file in inFile
// until a separator is read. Then any non - separator characters are 
// displayed in reverse order with the last and next to next to last 
// characters capitalized. 

#include <iostream>
#include <fstream>
const int L_CHAR = 1;
const int NN_CHAR = 3;
using namespace std;

bool isSep(char ch) {
    // any whitespace (as defined by the standard library isspace function)
    if (isspace(ch))
    {
        return false;
    }
    // separator checking list
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
    // is read char are separator?
    if (!isSep(thisChar))
    {
        return thisChar;
    }
    else 
    {
        int thisSeparator = Reverse(inFile, level + 1);
        // identifying chars need to be capitalized
        if (level == NN_CHAR || level == L_CHAR)
        { 
            cout.put((char)toupper(thisChar));
        }
        else
        { 
            cout.put(char(thisChar));
        }
        // separator return
        return thisSeparator;
    }
}
