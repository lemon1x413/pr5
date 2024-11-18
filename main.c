#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "sorting.h"
#include "validation.h"
#include "radndomString.h"

int main()
{
    srand(time(NULL));
    int strN = 0, strSize = 0, choiceFilling = 0;
    strN = validInputInt("Enter number of strings(from 2 to 10):\n", 2, 10);
    strSize = validInputInt("Enter size of string(from 2 to 100):\n", 2, 100);
    char list[strN][strSize+1] = {};
    char *listAddr[strN] = {};
    choiceFilling = validInputChoice("Choose filling method( 1 - manual input; 2 - random generated )\n", 1 , 2);
    switch (choiceFilling) {
        case 1:
            inputArray
            break;
        case 2:
            generateRandomString
    }
}