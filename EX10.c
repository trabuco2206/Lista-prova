#include <stdio.h>

int main() {
    int idade, i;

    for (i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade >= 0 && idade <= 12) {
            printf("Pessoa %d e uma crianca.\n", i);
        } else if (idade >= 13 && idade <= 17) {
            printf("Pessoa %d e um(a) adolescente.\n", i);
        } else if (idade >= 18 && idade <= 64) {
            printf("Pessoa %d e um(a) adulto(a).\n", i);
        } else if (idade >= 65) {
            printf("Pessoa %d e um(a) idoso(a).\n", i);
        } else {
            printf("Idade invalida.\n");
        }
    }

    return 0;
}