#ifndef OP5_VALIDATION_H
#define OP5_VALIDATION_H

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

#endif //OP5_VALIDATION_H