#ifndef OP5_RADNDOMARRAY_H
#define OP5_RADNDOMARRAY_H

char randomArray() {

}
char random(char min, char max) {
    char generatedChar = min + rand() % (max - min + 1);
    if (generatedChar > 90 && generatedChar < 97)
    {
        generatedChar += 6;
    }
    return generatedChar;
}

void generateRandomString(char **arr, int strN, int strSize) {
    for(int i = 0; i < strN; i++ )
    for (int j = 0; j < strSize; j++) {
        arr[i][j] = random(65, 122);
    }

    printf()
}
#endif //OP5_RADNDOMARRAY_H