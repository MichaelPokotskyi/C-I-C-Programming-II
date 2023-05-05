////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 4/25/2023
//// C2A5E4_DetectFloats.cpp
//// Win10
//// Visual C++ 2022, ISO C++ 17
////
//// Assignment #5 C2A5E4 (C)
//// Was unable to make my code work. I get the idea, but was struggled to
//// build correct structure. "Best" approach are represented.
//
//#include "C2A5E4_StatusCode-Driver.h"
//
//StatusCode DetectFloats(const char *chPtr){
//    enum
//    {
//        START, PREFIX_START, PREFIX, NO_WHOLE, WHOLE,
//        FRACT, P_SIGN, HEXDIGIT, SUFFIX
//    } 
//    // initial state
//    state = START;
//    // initial char position
//    size_t pos = 0;
//    for (;;)
//    {
//        switch (state)
//        {
//        case START:
//            switch (chPtr[pos])
//            {
//            case '0':
//                state = PREFIX_START;
//                break;
//            default:
//                return FAIL;
//            }
//            break;
//        case PREFIX_START:
//            switch (chPtr[pos])
//            {
//            case 'x': case 'X':
//                state = PREFIX;
//                break;
//            default:
//                return FAIL;
//            }
//            break;
//        case PREFIX:
//            switch (chPtr[pos])
//            {
//            case '.':
//                state = NO_WHOLE;
//                break;
//            case '0': case '1': case '2': case '3':
//            case '4': case '5': case '6': case '7':
//            case '8': case '9': case 'a': case 'A':
//            case 'b': case 'B': case 'c': case 'C':
//            case 'd': case 'D': case 'e': case 'E':
//            case 'f': case 'F':
//                state = WHOLE;
//                break;
//            default:
//                return FAIL;
//            }
//            break;
//        case NO_WHOLE:
//            switch (chPtr[pos])
//            {
//            case '0': case '1': case '2': case '3':
//            case '4': case '5': case '6': case '7':
//            case '8': case '9': case 'a': case 'A':
//            case 'b': case 'B': case 'c': case 'C':
//            case 'd': case 'D': case 'e': case 'E':
//            case 'f': case 'F':
//                state = FRACT;
//                break;
//            default:
//                return FAIL;
//            }
//            break;
//        case WHOLE:
//            switch (chPtr[pos])
//            {
//            case '0': case '1': case '2': case '3':
//            case '4': case '5': case '6': case '7':
//            case '8': case '9': case 'a': case 'A':
//            case 'b': case 'B': case 'c': case 'C':
//            case 'd': case 'D': case 'e': case 'E':
//            case 'f': case 'F':
//                state = WHOLE;
//                break;
//            case 'p': case 'P':
//                state = P_SIGN;
//            default:
//                return FAIL;
//            }
//            break;
//        case FRACT:
//            switch (chPtr[pos])
//            {
//            case '0': case '1': case '2': case '3':
//            case '4': case '5': case '6': case '7':
//            case '8': case '9': case 'a': case 'A':
//            case 'b': case 'B': case 'c': case 'C':
//            case 'd': case 'D': case 'e': case 'E':
//            case 'f': case 'F':
//                state = FRACT;
//            case 'p': case 'P':
//                state = P_SIGN;
//            default:
//                return FAIL;
//            }
//            break;
//        case P_SIGN:
//            switch (chPtr[pos])
//            {
//            case '0': case '1': case '2': case '3':
//            case '4': case '5': case '6': case '7':
//            case '8': case '9': case 'a': case 'A':
//            case 'b': case 'B': case 'c': case 'C':
//            case 'd': case 'D': case 'e': case 'E':
//            case 'f': case 'F':
//                state = P_SIGN;
//                break;
//            case '+': case '-':
//                state = HEXDIGIT;
//                break;
//            default:
//                return FAIL;
//            }
//            break;
//        case HEXDIGIT:
//            switch (chPtr[pos])
//            {
//            case '0': case '1': case '2': case '3':
//            case '4': case '5': case '6': case '7':
//            case '8': case '9':
//                state = HEXDIGIT;
//                break;
//            case 'F': case 'f': case 'L': case 'l': case '\0':
//                state = SUFFIX;
//                break;
//            default:
//                return FAIL;
//            }
//         case SUFFIX:
//            switch (chPtr[pos])
//            {
//            case 'L': case 'l':
//                return L_DOUBLE;
//                break;
//            case 'F': case 'f':
//                return FLOAT;
//                break;
//            case '\0':
//                return DOUBLE;
//                break;
//            default:
//                return FAIL;
//                break;
//            }
//        }    
//        break;
//        // iterating next char position
//        pos++;
//    }       
//}
