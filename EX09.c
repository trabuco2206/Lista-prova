#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("\nAluno %d:\n", i);

        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0;

        printf("Media do aluno %d: %.2f\n", i, media);
        
        if (media >= 7.0) {
            printf("Aluno %d: Aprovado\n", i);
        } else if (media >= 5.0 && media < 7.0) {
            printf("Aluno %d: Recuperacao\n", i);
        } else {
            printf("Aluno %d: Reprovado\n", i);
        }
    }

    return 0;
}