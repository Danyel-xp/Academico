#include <stdio.h>

float calcucar_media(float n1, float n2, float n3);
void mostra_resultado(char nome[], float media);

int main()
{
    int quantidade, i;
    char nome[50];
    float n1, n2, n3, media;

    printf("-------Controle de notas ------ \n");
    printf("Quantos alunos voce quer cadastrar: ");
    scanf("%d", &quantidade);

    i = 1;
    while (i <= quantidade)
    {
        printf("Aluno: %d \n", i);

        printf("Nome: ");
        scanf("%s", &nome);

        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);
        printf("Nota 3: ");
        scanf("%f", &n3);

        media = calcucar_media(n1, n2, n3);

        mostra_resultado(nome, media);

        i = i + 1;
    }
    printf("-----Fim do programa------");

    return 0;
}

// Função para calcular media

float calcucar_media(float n1, float n2, float n3)
{
    float media;

    media = (n1 + n2 + n3) / 3.0;
    return media;
}

// funçção mostrar mostra_resultado

void mostra_resultado(char nome[], float media)
{
    printf("Aluno: %s \n", nome);
    printf("Media: %.2f \n", media);

    if (media >= 6.0)
    {
        printf("Resultado: APRAVADO :D \n");
    }
    else
    {
        printf("Resultado: REPROVADO! \n");
    }
}