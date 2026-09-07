#include <stdio.h>

int main(void)
{
    int opcao;

    printf("---- Convertor de Termperatura -----\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Fahrenheit para Kelvin\n");
    printf("5. Kelvin para Celsius\n");
    printf("6. Kelvin para Fahrenheit\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    {
        float celsius, fahrenheit;

        printf("Opção 1 escolhida!\n");
        printf("Celsius: ");
        scanf("%f", &celsius);

        // T (° F) = T (° C) × 1,8 + 32
        fahrenheit = (celsius * 1.8f) + 32.0f;

        printf("Resultado: %.2f° F\n", fahrenheit);
        break;
    }

    case 2:
    {
        float celsius, kelvin;

        printf("Opção 2 escolhida\n");
        printf("Celsius: ");
        scanf("%f", &celsius);

        // K = °C + 273,15
        kelvin = celsius + 273.15f;

        printf("Resultado: %.2f° K", kelvin);
        break;
    }

    case 3:
    {
        float fahrenheit, celsius;

        printf("opcao 3 escolhida\n");

        printf("fahrenheit: ");
        scanf("%f", &fahrenheit);

        // °C = (°F − 32) × 5/9.
        celsius = ((fahrenheit - 32) * 5) / 9;

        printf("Resultado: %.2f° C", celsius);
        break;
    }
    case 4:
    {
        float fahrenheit, kelvin;

        printf("opcao 4 escolhida\n");

        printf("fahrenheit: ");
        scanf("%f", &fahrenheit);

        // K = (°F + 459,67) × 5/9.
        kelvin = ((fahrenheit + 459.67f) * 5) / 9;

        printf("Resultado: %.2f° K", kelvin);
        break;
    }

    case 5:
    {
        float kelvin, celsius;

        printf("opcao 5 escolhida\n");

        printf("Kelvin: ");
        scanf("%f", &kelvin);

        // C = K − 273,15
        celsius = kelvin - 273.15;

        printf("Resultado: %.2f° C", celsius);
        break;
    }
    case 6:
    {
        float kelvin, fahrenheit;

        printf("opcao 6 escolhida\n");

        printf("Kelvin: ");
        scanf("%f", &kelvin);

        // °F = 1,8 × (K − 273,15) + 32
        fahrenheit = (1.8f * (kelvin - 273.15f)) + 32;

        printf("Resultado: %.2f° F", fahrenheit);
        break;
    }

    default:
        printf("Opção inválida.\n");
    }

    return 0;
}