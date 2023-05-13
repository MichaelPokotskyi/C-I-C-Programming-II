//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 5/10/2023
// C2A7E2_ListHex.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #7 C2A7E2 (C)
// Displays the contents of the file in inFile as one pair of hexadecimal
// characters per file byte, zero - filled on the left if necessary to
// produce the two characters.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int _WIDTH = 2;
const int _COUNT = 1;
const int _ZERO = 0;

void ListHex(ifstream& inFile, int bytesPLine){
    int buf;
    // set fill and hex output
    cout << setfill('0') << hex;
    int count = _COUNT;
    while ((buf = inFile.get()) != EOF)
        {
            if (count % bytesPLine == _ZERO)
            {
                cout << setw(_WIDTH) << (unsigned int)buf << '\n';
            }
            else
            {
                // check here to detect if it a last value...and print no space
                cout << setw(_WIDTH) << (unsigned int)buf << " ";
            }
            count++;
        }
} // DRAFT
