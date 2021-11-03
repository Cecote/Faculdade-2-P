#include "nota.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerNotas(struct nota *notas)
{
    scanf("%lf", &notas->N1);
    scanf("%lf", &notas->N2);
    scanf("%lf", &notas->N3);
    scanf("%lf", &notas->N4);
}

void calculaMedia(struct nota *notas)
{
    notas->M1 = ((notas->N1 * 2) + (notas->N2 * 3) + (notas->N3 * 4) + (notas->N4 * 1)) / 10;
}

void leExame(struct nota *notas)
{
    scanf("%lf", &notas->N5);
}

void recalculaMedia(struct nota *notas)
{
    notas->M2 = (notas->M1 + notas->N5) / 2.0;
}

void printResultado(struct nota notas)
{
    printf("Media: %.1lf\n", notas.M1);
    if (notas.M1 >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (notas.M1 >= 5.0 && notas.M1 <= 6.9)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", notas.N5);
        if (notas.M2 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (notas.M2 < 5)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", notas.M2);
    }
    else if (notas.M1 <= 4.9)
    {
        printf("Aluno reprovado.\n");
    }
}
