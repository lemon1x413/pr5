#ifndef OP5_SORTING_H
#define OP5_SORTING_H

#include <string.h>

void bubbleSortAscending(char **mass, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(mass[i], mass[j]) > 0) {
                char *tmp = 0;
                tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
            }
        }
    }
}

void bubbleSortDescending(char **mass, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(mass[i], mass[j]) < 0) {
                char *tmp = 0;
                tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
            }
        }
    }
}

#endif