#include <stdio.h>

int main(){
    int i, j;
    float nota, peso, soma_notas, soma_pesos, media_ponderada, media_turma = 0;
    
    for (i = 1; i <= 5; i++) {
        soma_pesos = 0;
        soma_notas = 0;
        printf("\nAlunos %d: \n", i);
        
        for (j = 1; j <= 3; j++) {
            printf("Digite a nota %d do aluno %d: ", j, i);
            scanf("%f", &nota);
            printf("Digite o peso da nota %d do aluno %d: ", j, i);
            scanf("%f", &peso);
            
            soma_notas += nota * peso;
            soma_pesos += peso;
        }
        
        media_ponderada = soma_notas / soma_pesos;
        printf("Media ponderada do aluno %d: %.2f\n", i, media_ponderada);
        
        media_turma += media_ponderada;
    }
    
    media_turma /= 5;
    printf("\n Media final da turma: %.1f\n", media_turma);

return 0;
}