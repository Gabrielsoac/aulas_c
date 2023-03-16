#include <stdio.h>
#include <stdlib.h>

int main () {

    int x;
    x = 10;
    int *ponteiro;
    ponteiro = &x;

    printf("%i", *ponteiro);


    return 0;
}