#include <stdio.h>
#include <stdlib.h>

int main () {

    int x = 10;
    int *valor = &x;

    int y = 20;
    *valor = y;

    printf("%d %d", x, y);

    return 0;
}