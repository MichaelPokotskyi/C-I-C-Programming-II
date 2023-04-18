////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming II
//// C1 170379 Raymond L. Mitchell
//// 4/12/2023
//// C2A3E3_RecordOpinions.c
//// Win10
//// Visual C++ 2022, ISO C17
//// Assignment #3 C2A3E3 (C)
//// Function implement a survey of how shoppers like a product by
//// prompting them to enter a value within an allowed range 
//// of BEST to WORST.
//
//#include <stdio.h>
//
//#define BEST 2
//#define WORST (-BEST)
//#define CHOICES (BEST + (BEST) + 1)
//#define TERMINATE 999
//#define CENTER 2
//
//void RecordOpinions(void) {
//    int rating[CHOICES] = {0};
//    int *ptr = &rating[CHOICES / CENTER];
//    
//    printf("Allowed rating range are from %d to %d\n"
//        "Terminate value are %d\n", BEST, WORST, TERMINATE);
//    for (;;)
//    {
//        int user_input;
//        printf("Enter your rating ");
//        scanf_s("%d", &user_input);
//        if (user_input == TERMINATE)
//        {
//            // designated terminator breaks the loop
//            printf("Input terminated.\n");
//            break;
//        }
//        if (user_input < WORST || user_input > BEST)
//        {
//            // out of range notification and re-enter value
//            printf("Out of range rating, input again\n");
//        }
//        else
//        {
//            // only in-range values are updated, supporting negative indices
//            ptr[user_input]++;
//        }
//    }
//    // formatted output section
//    printf("\nRating    Quantity"
//        "\n------    --------\n");
//    for (int output_it = CHOICES - 1; output_it >= 0; output_it--)
//    {
//        printf("%6d%12d\n", output_it + WORST, rating[output_it]);
//    }
//    return;
//}
