////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 3/28/2023
//// C2A1E6_AppendFile.cpp
//// Win10
//// Visual C++ 2022, ISO C++ 17
//// AppendFile open files in binary mode and append data 
//// from input file to output file. If an open fails the function 
//// output an error message to cerr, and return -1.
//
//#include <iostream>
//#include <fstream>
//const int READ_BUF = 256;
//using namespace std;
//
//int AppendFile(const char *inFile, const char *outFile)
//{
//    // Open and test input file, message + -1 in return if fail.
//    ifstream inputFile(inFile, ios_base::binary);
//    if (!inputFile.is_open())
//    {
//        cerr << "Open failed: " << inFile << "\n";
//        return -1;
//    }
//    // Open to append and test output file, message + -1 in return if fail.
//    ofstream outputFile(outFile, ios_base::binary | ios_base::app);
//    if (!outputFile.is_open())
//    {
//        cerr << "Open failed: " << outFile << "\n";
//        return -1;
//    }
//    for (;;) 
//    {
//        // copying data into file by reading buffer length size each iteration
//        char buf[READ_BUF];
//        inputFile.read(buf, sizeof(buf));
//        streamsize bytes = inputFile.gcount();
//        if (bytes == 0) 
//        {
//            outputFile.close();
//            break;
//        }
//        outputFile.write(buf, bytes);
//    }
//    // close all and return success zer0
//    inputFile.close();
//    outputFile.close();
//    return 0;
//}
