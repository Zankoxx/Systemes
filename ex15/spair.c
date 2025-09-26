//
// Created by Anir on 26/09/2025.
//
#include "pair.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s \n", argv[0]);
        return 1;
    }
    char *end;
    long n = strtol(argv[1], &end, 10);
    if (*end != '\0' || n < 0) {
        fprintf(stderr, "Veuillez fournir un entier positif ou nul.\n");
        return 1;
    }
    if (pair(n)) {
        printf("%ld est pair\n", n);
    } else {
        printf("%ld est impair\n", n);
    }

    return 0;
}