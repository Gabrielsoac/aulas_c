#include <stdio.h>
#include <stdlib.h>


void concatenar(char palavra[], int num, char palavra2[], int num2, char nPalavra[]){

    
    for (int i = 0; i < num; i++) {
        nPalavra[i] = palavra[i];
    }
    for (int j = 0; j < num2; j++) {
        nPalavra[num+j] = palavra2[j];
    }
    

}


int main () {

    void concatenar(char palavra[], int num, char palavra2[], int num2, char nPalavra[]);
    char palavra1[] = {'p','a','o',' ','e'};
    char palavra2[] = {' ','q','u','e','i','j','o'};
    char juncao[12];
    
    concatenar(palavra1, 5, palavra2, 7, juncao);

    for (int i = 0; i < 13; i++) {
        printf("%c", juncao[i]);
    }


    return 0;
}