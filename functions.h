#ifndef OP5_FUNCTIONS_H
#define OP5_FUNCTIONS_H

void inputString(char **arr, int n, int size) {
    for (int i = 0; i < n; i++) {
        do {
            printf("Enter string [%03d]:", i + 1);
            fgets(arr[i], size + 2, stdin);
        } while (!validInputString(arr[i], size));
    }
}

char random() {
    int min = 65, max = 122;
    char generatedChar;
    do {
        generatedChar = min + rand() % (max - min + 1);
    } while (generatedChar > 90 && generatedChar < 97);
    return generatedChar;
}

void generateRandomString(char **arr, int n, int size) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = random();
        }
        arr[i][size] = '\0';
    }
}

void printString(char **arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("[%03d] %s\n", i + 1, arr[i]);
    }
}

#endif