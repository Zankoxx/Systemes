//
// Created by Anir on 26/09/2025.
//
#include <stdio.h>
int impair(unsigned i);

//Exercice 13
int pair(unsigned int i) {
    if (i==0)
        return 1;
    return impair(i-1);
}

int impair(unsigned int i) {
    if (i==0)
        return 0;
    return pair(i-1);
}

//Exercice 14
/*
Les avantages de la liaision statique est que le code est plus rapide et plus sûr car tout est vérifié à la compilation.
Les inconvénients sont que le code est plus lourd et qu'il est plus difficile de faire des mises à jour.
Les avantages de la liaison dynamique sont que le code est plus léger et qu'il est plus facile de faire des mises à jour.
Les inconvénients sont que le code est plus lent et moins sûr car tout n'est pas vérifié à la compilation.

*/
