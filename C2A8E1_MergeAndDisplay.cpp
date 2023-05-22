//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 5/16/2023
// C2A8E1_MergeAndDisplay.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #8 C2A8E1 (C)
// Proceeding in order from the first file specified in files, the first line 
// in each file is read and displayed, followed by the second line in each, 
// followed by the third, etc.

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void MergeAndDisplay(ifstream files[], size_t count) {
    // read buffer
    string buf;
    ifstream *start = files, *end = files + count;
    while (count != 0)
    {
        for (files = start; files < end; ++files)
        {
            // check if no open files
            if (!files->is_open())
            {
                continue;
            }
            // read line
            getline(*files, buf);
            // if no data
            if (files->eof())
            {
                // close that file
                files->close();
                --count;
            }
            else 
            {
                cout << buf << "\n";
            }
        }
    }
}
