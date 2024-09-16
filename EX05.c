#include <stdio.h>

int main() {
    int numeros[10]; 
    int pares = 0, impares = 0; 

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;  
        } else {
            impares++;  
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros ímpares: %d\n", impares);

    return 0;
}
