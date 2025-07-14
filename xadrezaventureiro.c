#include <stdio.h>

int main() {
    int i, j;

    
    for(i = 0; i < 3; i++) {
       
        j = 0;
        while(j < 2) {
            printf("Baixo\n");
            j++;
        }

      
        printf("Esquerda\n");

        printf("---\n");
    }

    return 0;
}
