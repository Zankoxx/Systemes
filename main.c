#include <stdio.h>
#include "exercice10-11.c"
#include <string.h>
int main(void) {
    char* pop = "1234";
    int truc = string_vers_int(pop);
    printf("Tiens c kdo %d\n",truc);
    char* bidule = int_vers_string(500);
    printf("%s\n",bidule);
    free(bidule);
    return 0;
}