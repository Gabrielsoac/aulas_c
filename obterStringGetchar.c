#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[20];
    char auxiliar;
    int letra = 0;

    printf("Digite seu nome: \n");

    do {
        auxiliar = getchar();
        nome[letra] = auxiliar;
        letra++;

    } while (auxiliar != '\n');

    nome[letra - 1] = '\0';

    printf("Bem-vindo %s\n", nome);
    
    return 0;
}