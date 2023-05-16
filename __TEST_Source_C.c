//#include <stdio.h>
//#include "C2A7E4_Test-Driver.h"
//#define Elements(array) (sizeof(array)/sizeof((array)[0]))
//
//int main() {
//    struct Test x[] =                      // an array of structures
//           {                                      // declare and initialize
//              {23.6F, -425e-6, (void *)0x2345},   // structure 0
//              {2, 1, 0},                          // structure 1
//              {-6, 3.3, NULL}                     // structure 2
//           };
//
//struct Test y[Elements(x)] =           // an array of structures
//   {
//      {123.456F, 789.12, (void *)0x9876}, // structure 0
//      {69.0F, 24, (void *)0x1928A},       // structure 1
//      {-59.2F, 89.48e-16, (void *)0xABC}  // structure 2
//   };
//
//    printf( "%u, %u, %u\n", sizeof(float), sizeof(double), sizeof(void*) );
//    printf( "%u, %u, %u\n", sizeof(x[0]), sizeof(x[1]), sizeof(x[2]) );
//    printf("%u, %u, %u\n", sizeof(y[0]), sizeof(y[1]), sizeof(y[2]));
//    return 0;
//}