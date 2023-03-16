#include <stdio.h>
#include <stdlib.h>

int contLetras(char palavraCont[]) {

    int numeroLetras = 0;

    while (palavraCont[numeroLetras] != '\0') {
        numeroLetras++;
    }
    
    return numeroLetras;
}

int main () {

    int contaLetras(char palavraCont[]);
    char palavra[20];

    printf("Digite a palavra para contagem de letras: \n");
        scanf("%s", palavra);

    int num = contLetras(palavra);

    printf("A palavra %s possui %i letras. \n", palavra, num);

    return 0;

}