////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/10/2023
//// C2A7E2_ListHex.cpp
//// Win10
//// Visual C++ 2022, ISO C++ 17
////
//// Assignment #7 C2A7E2 (C)
//// Displays the contents of the file in inFile as one pair of hexadecimal
//// characters per file byte, zero - filled on the left if necessary to
//// produce the two characters.
//
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//
//const int WIDTH = 2;
//const int COUNT = 1;
//const int NUMZER0 = 0;
//
//void ListHex(ifstream& inFile, int bytesPerLine) {
//    cout << hex << setfill('0');              
//    int byte, bytesOnThisLine = NUMZER0;
//    while ((byte = inFile.get()) != EOF)
//    {
//        // if not a time for a new line 
//        if (bytesOnThisLine != NUMZER0) 
//        {
//            cout << ' ';
//        }
//        cout << setw(WIDTH) << byte;
//        // if time for new line
//        if (++bytesOnThisLine == bytesPerLine)
//        {
//            // reset counter
//            bytesOnThisLine = NUMZER0;
//            cout << '\n';
//        }
//    }
//    // this statement add newline after while loop finished
//    if (bytesOnThisLine != NUMZER0)
//        cout << '\n';
//}
