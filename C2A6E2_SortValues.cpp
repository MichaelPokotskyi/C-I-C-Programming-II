////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 5/2/2023
//// C2A6E2_SortValues.cpp
//// Win10
//// Visual C++ 2022, ISO C++ 17
////
//// Assignment #6 C2A6E2 (C)
//// Sorts array in descending order using the bubble sort algorithm
//
//float *SortValues(float *first, size_t elements) {
//    bool didSwap;
//    float *last = &first[--elements];
//    do 
//    {
//        didSwap = true;
//        // iterating array
//        for (float *nextpos = first; nextpos < last;)
//        {
//            float *currentpos = nextpos++;
//            // comparing values
//            if (*currentpos < *nextpos)
//            {
//                // changing order steps
//                float temp = *currentpos;
//                *currentpos = *nextpos;
//                *nextpos = temp;
//                didSwap = false;
//            }
//        }
//        --last;
//    } 
//    while (!didSwap);
//    return first;
//}
