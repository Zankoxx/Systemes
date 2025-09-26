#include <stdio.h>
#include <stdlib.h>
// Exercice 10
int string_vers_int(char s[]) {
    int i = 0;
    int res = 0;
    while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9') {
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return res;
}

//Exercice 11
char* int_vers_string(int n) {
    int nbc = 0;
    if (n < 10) {
        char* res = malloc(2 * sizeof(char));
        res[0] = n + '0';
        res[1] = '\0';
        return res;
    }
    int temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        nbc++;
    }
    char* res2 = malloc(nbc * sizeof(char)+1);
    for (int i = 0; i <= nbc; i++) {
        res2[nbc-i]= (n % 10) + '0';
        n = n / 10;
    }
    return res2;
}

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
