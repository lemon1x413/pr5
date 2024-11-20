#ifndef OP5_VALIDATION_H
#define OP5_VALIDATION_H
#include <ctype.h>

int validInputInt ( char *message, int min, int max )
{
    int value = 0, validInput = 0;
    do
    {
        printf("%s", message);
        validInput = scanf("%d", &value);
        if (validInput != 1 || value < min || value > max)
        {
            printf("Invalid input\n");
        }
        fflush(stdin);
    } while (validInput != 1 || value < min || value > max);
    return value;
}
int validInputChoice ( char *message, int choice1, int choice2 )
{
    int value = 0;
    do
    {
        printf("%s", message);
        value = getch();
        if (value != choice1 && value != choice2)
        {
            printf("Invalid input\n");
        }
        fflush(stdin);
    } while (value != choice1 && value != choice2);
    return value;
}

int validInputString(char *arr, int size) {
    unsigned stringLen = strlen(arr);
    if (stringLen == 0 || *arr == '\n') {
        printf("Invalid input. Entered string is empty.\n");
        return 0;
    }
    if (arr[stringLen - 1] != '\n') {
        printf("Invalid input.Max length of string is: %d\n", size);
        fflush(stdin);
        return 0;
    }
    if (arr[stringLen - 1] == '\n') {
        arr[stringLen - 1] = '\0';
        stringLen--;
    }
    for (int i = 0; i < stringLen; i++) {
        if (!isalpha(arr[i])) {
            printf("String must contain only letters.\n");
            return 0;
        }
    }
    return 1;
}

#endif