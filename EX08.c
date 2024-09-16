#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite, tentativas = 7;

    srand(time(NULL));
 
    numero_sorteado = rand() % 100 + 1;

    printf("Adivinhe o numero sorteado (entre 1 e 100)!\n");
    printf("Voce tem %d tentativas.\n", tentativas);

    for (int i = 1; i <= tentativas; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &palpite);

        if (palpite == numero_sorteado) {
            printf("Parabens! Você acertou o numero em %d tentativas!\n", i);
            return 0;  
        } else if (palpite < numero_sorteado) {
            printf("O numero sorteado e maior que %d.\n", palpite);
        } else {
            printf("O numero sorteado e menor que %d.\n", palpite);
        }
    }

    printf("Voce nao conseguiu adivinhar o numero. O numero sorteado era %d.\n", numero_sorteado);

    return 0;
}