#include <stdio.h>
#include <stdlib.h>

float c1, c2, c3, x;

int main()
{
    printf("\nIntroduce la calificación 1: ");
    scanf("%f", &c1);
    printf("\nIntroduce la calificación 2: ");
    scanf("%f", &c2);
    printf("\nIntroduce la calificación 3: ");
    scanf("%f", &c3);

    x = (c1 + c2 + c3) / 3;

    printf("\nEl promedio de , %.1f,%.1f,%.1f es = %.1f\n", c1, c2, c3, x);
    if (x == 10)
    {
        printf("Excelente");
    }
    if ((x >= 9) && (x <= 9.9))
    {
        printf("Muy bien");
    }
    if ((x >= 8) && (x <= 8.9))
    {
        printf("Bien");
    }
    if ((x >= 7) && (x <= 7.9))
    {
        printf("Suficiente");
    }
    if (x < 7)
    {
        printf("No Aprobado");
    }
}