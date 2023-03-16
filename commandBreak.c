#include <stdio.h>
#include <stdlib.h>

int main () {

    for (int i = 1; i < 20; i++) {
    
        if (i % 3 == 0 && i % 9 == 0) {
         printf("%d e divisivel por 3 e 9\n", i);   
         break;
        } 
        else {
        printf("%d Nao é divisivel\n", i);
        }
    }
    
    return 0;
}