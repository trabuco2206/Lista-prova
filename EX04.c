#include <stdio.h>

int main() {
    int decimal, base, resto, i = 0;
    char resultado[32]; 
   
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    do {
        printf("Digite a base de conversao (entre 2 e 16): ");
        scanf("%d", &base);
    } while (base < 2 || base > 16);  

    while (decimal > 0) {
        resto = decimal % base; 
        if (resto < 10) {
            resultado[i] = resto + '0'; 
        } else {
            resultado[i] = resto - 10 + 'A';  
        }
        decimal = decimal / base;  
        i++;
    }

    printf("Numero convertido na base %d: ", base);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", resultado[j]);  
    }
    printf("\n");

return 0;
}