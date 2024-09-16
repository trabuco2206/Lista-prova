#include <stdio.h>

int main() {
    int numero, i;

    for (i = 1; i <= 6; i++) {
        printf("Digite o %dº numero inteiro: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {  
            printf("O numero %d e par.\n", numero);
            if (numero > 10) {
                printf("O numero %d e maior que 10.\n", numero);
            } else {
                printf("O numero %d nao e maior que 10.\n", numero);
            }
        } else {  
            printf("O numero %d e impar.\n", numero);
            if (numero < 50) {
                printf("O numero %d e menor que 50.\n", numero);
            } else {
                printf("O numero %d nao e menor que 50.\n", numero);
            }
        }
    }

    return 0;
}