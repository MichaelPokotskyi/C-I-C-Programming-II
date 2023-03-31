//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 3/28/2023
// C2A1E6_AppendFile.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
// 

#include <iostream>
#include <fstream>
//#include <cstdlib>

using namespace std;

int AppendFile(const char* inFile, const char* outFile) 
{
    // Open and test the input file.
    ifstream inputFile(inFile, ios_base::binary);
    if (!inputFile.is_open())
    {
        cerr << "Open failed: " << inFile << "\n";
        return -1;
        //exit(EXIT_FAILURE);
    }
    // Open and test the output file.
    ofstream outputFile(outFile, ios_base::binary | ios_base::trunc);
    if (!outputFile.is_open())
    {
        cerr << "Open failed: " << outFile << "\n";
        return -1;
        //exit(EXIT_FAILURE);
    }

    inputFile.close();
    outputFile.close();
    return 0;
}