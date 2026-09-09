#include <locale.h>
#include <math.h>    // Biblioteca para operações matematicas.
#include <stdbool.h> // Biblioteca para usar variaveis ou um valor booleano
#include <stdio.h>   // Biblioteca para entrada e saida de dados.
#include <stdlib.h>
// #include <Windows.h>

#define M_PI 3.14159265358979323846
char traco[] = "-------------------------------------------\n";
float a, b;
int entrada;

int main()

{
  // Faz com que o terminal aceite UTF8
  // SetConsoleOutputCP(65001)
  setlocale(LC_ALL, ".UTF-8");

  while (true) {

    printf("|==================================|\n");
    printf("|            CALCULADORA           |\n");
    printf("|==================================|\n");
    printf("| 1. SOMA                          |\n");
    printf("| 1. SUBTRAÇÃO                     |\n");
    printf("| 3. MULTIPLICAÇÃO                 |\n");
    printf("| 4. DIVISÃO                       |\n");
    printf("| 5. MÉDIA                         |\n");
    printf("| 6. X²                            |\n");
    printf("| 7. RAIZ DE X                     |\n");
    printf("| 8. PORCENTAGEM                   |\n");
    printf("| 9. FATORIAL                      |\n");
    printf("| 10.RESTO DA DIVISÃO              |\n");
    printf("| 11. IMC                          |\n");
    printf("|==================================|\n");
    printf("|           GEOMETRIA 2D           |\n");
    printf("|==================================|\n");
    printf("| 12. AREA DO QUADRADO             |\n");
    printf("| 13. AREA DO RETÂNGULO            |\n");
    printf("| 14. AREA DO CIRCULO              |\n");
    printf("| 15. AREA DO TRIANGULO            |\n");
    printf("|==================================|\n");
    printf("|          TRIGRONOMETRIA          |\n");
    printf("|==================================|\n");
    printf("| 16. HIPOTENUSA                   |\n");
    printf("| 17. SENO                         |\n");
    printf("| 18. COSSENO                      |\n");
    printf("| 19. TANGENTE                     |\n");
    printf("| 20. GRAUS PARA RADIANOS          |\n");
    printf("|==================================|\n");
    printf("| 0. SAIR                          |\n");
    printf("|==================================|\n");

    printf("\nEscolha uma opção de 1 a 20\n");

    printf("Digite uma opcao: ");
    scanf("%i", &entrada);

    if (entrada > 0 && entrada <= 20) {
      if (entrada == 1) {
        float soma;

        printf("valor A : ");
        scanf("%f", &a);

        printf("Valor B: ");
        scanf("%f", &b);

        soma = a + b;

        printf("\n%s", traco);
        printf("===> Resultado: %.2f\n", soma);
      }

      else if (entrada == 2) {
        float subtracao;

        printf("Valor A: ");
        scanf("%f", &a);

        printf("valor B: ");
        scanf("%f", &b);

        subtracao = a - b;

        printf("\n%s", traco);
        printf("====> Resultado: %.2f\n", subtracao);
      }

      else if (entrada == 3) {
        float multiplicacao;

        printf("Valor de A: ");

        scanf("%f", &a);

        printf("Valor B: ");
        scanf("%f", &b);

        multiplicacao = a * b;

        printf("\n%s", traco);
        printf("====> Resultado: %.2f\n", multiplicacao);
      }

      else if (entrada == 4) {
        float divisao;

        printf("Valor A: ");
        scanf("%f", &a);

        printf("Valor B: ");
        scanf("%f", &b);

        divisao = a / b;

        if (b == 0) {
          printf("\n%s", traco);
          printf("Não é possível dividir por 0, tente novamente...\n");
        }

        else {
          printf("\n%s", traco);
          printf("====> Resultado: %.2f \n", divisao);
        }
      } else if (entrada == 5) {
        float media, c;

        printf("Valor A: ");
        scanf("%f", &a);

        printf("Valor B: ");
        scanf("%f", &b);

        printf("Valor C: ");
        scanf("%f", &c);

        media = (a + b + c) / 3;

        printf("\n%s", traco);
        printf("====> Resultado: %.2f", media);
      } else if (entrada == 6) {
        float potencia;

        printf("Base: ");
        scanf("%f", &a);

        printf("Expoente: ");
        scanf("%f", &b);

        potencia = pow(a, b);

        printf("\n%s", traco);
        printf("====> Resultado: %.2f \n", potencia);
      }

      else if (entrada == 7) {
        float raizQuadrada;

        printf("Raiz quadrada de: ");
        scanf("%f", &a);

        raizQuadrada = sqrt(a);

        printf("\n%s", traco);
        printf("====> Resultado: %.2f \n", raizQuadrada);
      }

      else if (entrada == 8) {
        float porcentagem;

        printf("Valor A: ");
        scanf("%f", &a);

        printf("valor B: ");
        scanf("%f", &b);

        porcentagem = (a / 100) * b;

        printf("\n%s", traco);
        printf("====> Resultado: %.0f/100 de %.0f = %.0f ", a, b, porcentagem);
      }

      else if (entrada == 9) {
        int n;
        unsigned long long fatorial = 1;

        printf("Fatorial: ");
        scanf("%d", &n);

        for (int i = 2; i <= n; i++) {
          fatorial *= i;
        }

        printf("%s", traco);
        printf("====> Resultado: %llu \n", fatorial);
      }

      else if (entrada == 10) {
        float resto;

        printf("Valor A: ");
        scanf("%f", &a);

        printf("Valor B: ");
        scanf("%f", &b);

        resto = fmodf(a, b);

        printf("\n %s", traco);
        printf("====> Resultado: %.2f \n", resto);
      }

      else if (entrada == 11) {
        float imc;

        printf("Peso: ");
        scanf("%f", &a);

        printf("Altura: ");
        scanf("%f", &b);

        imc = a / pow(b, 2);

        printf("\n %s", traco);
        printf("====> Resultado: %.2f", imc);

      }

      // Geometria 2D
      else if (entrada == 12) {
        float area;

        printf("Base: ");
        scanf("%f", &a);

        area = a * a;

        printf("\n %s", traco);
        printf("====> Resultado: %.2f cm² \n", area);
      }

      else if (entrada == 13) {
        float area_retangulo;

        printf("Base: ");
        scanf("%f", &a);

        printf("Altura: ");
        scanf("%f", &b);

        area_retangulo = a * b;

        printf("\n %s", traco);
        printf("====> Resultado: %.2f cm²\n", area_retangulo);
      }

    }

    else if (entrada == 0) {
      printf("Encerrando programa");
      printf("Ate logo...");
      exit(0);
    }

    else {
      printf("Entrada invalida");
    }
    return 0;
  }
}
