#include <stdio.h>

int main() {
    
    int i;
    int num;
    int soma;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Insira um numero inteiro positivo\n");
        return 1;
    }
    
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    
    if (soma == num) {
        printf("%d e um numero perfeito. \n", num);
    } else {
        printf("%d nao e um numero perfeito. \n", num);
    }
    
return 0;
}
