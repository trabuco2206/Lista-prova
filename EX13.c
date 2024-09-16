#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        printf("\nMenu:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = celsiusParaFahrenheit(temperatura);
                printf("%.2f Celsius e igual a %.2f Fahrenheit.\n", temperatura, resultado);
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = fahrenheitParaCelsius(temperatura);
                printf("%.2f Fahrenheit e igual a %.2f Celsius.\n", temperatura, resultado);
                break;

            case 3:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}