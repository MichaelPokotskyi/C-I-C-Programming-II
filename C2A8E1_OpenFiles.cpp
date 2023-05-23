////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/16/2023
//// C2A8E1_OpenFiles.cpp
//// Win10
//// Visual C++ 2022, ISO C++ 17
////
//// Assignment #8 C2A8E1 (C)
//// Dynamically creates an array of ifstream objects having count elements then
//// uses those objects to open the files named in fileNames, in order.
//
//#include <fstream>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//ifstream *OpenFiles(char * const fileNames[], size_t count) {
//    // zer0 array test
//    if (count == 0)
//    {
//        cerr << "No files to open\n";
//        exit(EXIT_FAILURE);
//    }
//    ifstream *openf;
//    if ((openf = new (nothrow) ifstream[count]) == NULL)
//    {
//        // allocation fail test
//        cerr << "Fail allocation memory\n";
//        exit(EXIT_FAILURE);
//    }
//    for (size_t file = 0; file < count; ++file)
//    {
//        // open each file
//        openf[file].open(fileNames[file]);
//        //open each file fail test
//        if (!openf[file].is_open())
//        {
//            // and close all prev opened files counting backward
//            for (size_t closef = file; closef != 0; --closef)
//            {
//                openf[closef].close();
//            }
//            // delete dynamic allocation
//            delete[] openf;
//            cerr << "Can't open file " << fileNames[file] << "\n";
//            exit(EXIT_FAILURE);
//        }
//    }
//    return openf;
//}
