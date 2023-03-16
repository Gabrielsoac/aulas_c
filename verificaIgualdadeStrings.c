#include <stdio.h>
#include <stdlib.h>

int main() {

    _Bool stringsIguais (char word1[], char word2[]);

    if (stringsIguais("Gabriel", "Gabriel")) {
        printf("As strings são verdadeiras\n");
    } else {
        printf("As strings não são iguais\n");
    }
    
    return 0;
}

_Bool stringsIguais (char word1[], char word2[]) {

    int control = 0;
    while (word1[control] == word2[control] && word1[control] && word2[control] != '\0') {
        control++;
    } 
    if (word1[control] == word2[control]) {
        return 1;
    } else {
        return 0;
    }
    

    



}