#include <stdio.h>
#include <stdlib.h>

int main () {

    void verificaLetra (char string[]);
    char palavra[20];

    printf("Digite uma palavra para que seja verificada: \n");
        scanf("%s", &palavra);

    int control = 0;
    while (palavra[control] != '\0') {
        verificaLetra(palavra[control]);
        control++;
    }

    return 0;
}

void verificaLetra (char string[]) {

    if (string >= 'a' && string <= 'z' || string >= 'A' && string <= 'Z') {
        printf("é uma letra\n");
    } else {
        printf("Não é uma letra\n");
    }
    
}