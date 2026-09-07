#include <stdio.h>   // Biblioteca para entrada e saida de dados.
#include <math.h>    // Biblioteca para operações matematicas.
#include <stdbool.h> // Biblioteca para usar variaveis ou um valor booleano
#include <stdlib.h>
#include <locale.h>
// #include <Windows.h>

int main()

{
    // Faz com que o terminal aceite UTF8
    // SetConsoleOutputCP(65001)
    setlocale(LC_ALL, ".UTF-8");

    while (true)
    {
        char *traco = "-------------------------------------------\n";

        printf("\n===== Calculadora Cientifica =====\n");

        printf("1.Soma | 2.Subtração | 3.Multiplicação | 4.Divisão | 5.Potência | 6.Modulo\n ");
        printf("7.Raiz | 8.Seno | 9.Cosseno | 10.Tangente | 11. Asin | 12.Acos | 13.Atan\n");
        printf("14.Log10 | 15.Ln | 16.Exp | 17. Abs | 18.Int | 19.Sinal | 20.Fatorial\n");
        printf("0.Sair\n");

        printf(traco);
        printf("Escolha uma opção de 1 a 20\n");

        int entrada;
        float a, b;

        printf("Digite uma opcao: ");
        scanf("%i", &entrada);

        if (entrada > 0 && entrada <= 20)
        {
            if (entrada == 1)
            {
                float soma;

                printf("valor A : ");
                scanf("%f", &a);

                printf("Valor B: ");
                scanf("%f", &b);

                soma = a + b;

                printf(traco);
                printf("===> Resultado: %.2f\n", soma);
            }

            else if (entrada == 2)
            {
                float subtracao;

                printf("Valor A: ");
                scanf("%f", &a);

                printf("valor B: ");
                scanf("%f", &b);

                subtracao = a - b;

                printf("====> Resultado: %.2f\n", subtracao);
            }

            else if (entrada == 3)
            {
                float multiplicacao;

                printf("Valor de A: ");
                ;
                scanf("%f", &a);

                printf("Valor B: ");
                scanf("%f", &b);

                multiplicacao = a * b;

                printf("====> Resultado: %.2f\n", multiplicacao);
            }

            else if (entrada == 4)
            {
                float divisao;

                printf("Valor A: ");
                scanf("%f", &a);

                printf("Valor B: ");
                scanf("%f", &b);

                divisao = a / b;

                if (b == 0)
                {
                    printf("Não é possível dividir por 0, tente novamente...\n");
                }

                else
                {
                    printf("====> REsultado: %.2f \n", divisao);
                }
            }

            else if (entrada == 5)
            {
                float potencia;

                printf("Base: ");
                scanf("%f", &a);

                printf("Expoente: ");
                scanf("%f", &b);

                potencia = pow(a, b);

                printf("====> Resultado: %.2f \n", potencia);
            }
            else if (entrada == 6)
            {
                float modulo;

                printf("Modulo de: ");
                scanf("%f", &a);

                modulo = fabs(a);

                printf("====> Resultado: %.2f \n", modulo);
            }
            else if (entrada == 7)
            {
                float raizQuadrada;

                printf("Raiz quadrada de: ");
                scanf("%f", &a);

                raizQuadrada = sqrt(a);

                printf("====> Resultado: %.2f \n", raizQuadrada);
            }

            else if (entrada == 8)
            {
                float pi, graus, radianos, seno;

                pi = 3, 14;

                printf("Seno de: ");
                scanf("%f", &graus);

                radianos = graus * pi / 180;

                seno = sin(radianos);

                printf("====> Resultado: %.2f \n", seno);
            }

            else if (entrada == 9)
            {
                float pi, graus, radianos, cosseno;

                pi = 3, 14;

                printf("Cosseno de: ");
                scanf("%f", &graus);

                radianos = graus * pi / 180;

                cosseno = cos(radianos);

                printf("====> Resultado: %.2f \n", cosseno);
            }

            else if (entrada == 10)
            {
                float pi, graus, radianos, tangente;

                pi = 3, 14;

                printf("Tangente de: ");
                scanf("%f", &graus);

                radianos = graus * pi / 180;

                tangente = tan(radianos);

                printf("====> Resultado: %.2f \n", tangente);
            }
        }

        else if (entrada == 0)
        {
            printf("Encerrando programa");
            printf("Ate logo...");
            exit(0);
        }

        else
        {
            printf("Entrada invalida");
        }
        return 0;
    }
}