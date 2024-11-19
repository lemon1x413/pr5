#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "sorting.h"
#include "validation.h"
#include "functions.h"

int main() {
    srand(time(NULL));
    do {
        int strN = 0, strSize = 0, choiceFilling = 0, choiceSorting = 0;
        printf("This program sorts strings of alphabetic characters. \nWARNING! Program works only with english alphabet\n");
        strN = validInputInt("Enter number of strings(from 2 to 100):\n", 2, 100);
        strSize = validInputInt("Enter size of string(from 2 to 100):\n", 2, 100);
        char list[strN][strSize+1] = {};
        char *listAddr[strN] = {};
        for (int i = 0; i < strN;i++) {
            listAddr[i] = list[i];
        }
        choiceFilling = validInputChoice("Choose filling method (1 - manual input, 2 - random generated)\n", '1' , '2');
        switch (choiceFilling) {
            case '1':
                inputString(listAddr, strN, strSize);
                printf("[----------Entered strings----------]\n");
                printString(listAddr, strN);
                break;
            case '2':
                generateRandomString(listAddr, strN, strSize);
                printf("[----------Generated strings----------]\n");
                printString(listAddr, strN);
                break;
            default:
                printf("Invalid input\n");
                break;
        }
        do {
            choiceSorting = validInputChoice("Choose sorting method (1 - descending, 2 - ascending)\n", '1' , '2');
            switch (choiceSorting) {
                case '1':
                    bubbleSortDescending(listAddr, strN);
                    break;
                case '2':
                    bubbleSortAscending(listAddr, strN);
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            printf("[----------Sorted strings----------]\n");
            printString(listAddr, strN);
            printf("Press ENTER to continue sorting, or any other key to EXIT\n");
        } while (getch() == 13);
        printf("Press ENTER to continue, or any other key to EXIT\n");
    } while (getch() == 13);
    return 0;
}