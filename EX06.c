#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) {
        return 0;  
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int inicio, fim, encontrouPrimo = 0;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        printf("Erro: o valor inicial deve ser menor ou igual ao valor final.\n");
        return 1;
    }

    printf("\nNumeros primos no intervalo [%d, %d]:\n", inicio, fim);

    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            encontrouPrimo = 1; 
        }
    }

    if (!encontrouPrimo) {
        printf("Nenhum nUmero primo encontrado no intervalo.\n");
    }

    printf("\n");

    return 0;
}