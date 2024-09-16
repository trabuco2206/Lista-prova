#include <stdio.h>

int main() {
    float notas[3], media;
    int i, j;

    for (i = 1; i <= 5; i++) {
        printf("\nAluno %d:\n", i);
        media = 0;

        for (j = 1; j <= 3; j++) {
            printf("Digite a nota %d: ", j);
            scanf("%f", &notas[j - 1]);
            media += notas[j - 1]; 
        }

        media /= 3.0;

        printf("Media do aluno %d: %.2f\n", i, media);
        if (media >= 7.0) {
            printf("Aluno %d: Aprovado\n", i);
        } else {
            printf("Aluno %d: Reprovado\n", i);
        }
    }

    return 0;
}