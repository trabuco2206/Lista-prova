#include <stdio.h>
#include <math.h>
int main()
{
    
    float valor_inicial;
    float taxa;
    float valor_final;
    int anos;
    int i;
    
    printf("Qual o valor inicial investido: ");
    scanf("%f", &valor_inicial);
    printf("Qual a taxa de juros anual(em %%): ");
    scanf("%f", &taxa);
    printf("Quantos anos o dinheiro sera investido: ");
    scanf("%d", &anos);

    taxa = taxa / 100.0;
    
    printf("\nAno\tValor Acumulado\n");
    printf("==========================\n");
    
    for (i = 1; i <= anos; i++) {
        valor_final = valor_inicial * pow(1 + taxa, i);
        printf("%d\t%.2f\n", i, valor_final);
    }

return 0;
}