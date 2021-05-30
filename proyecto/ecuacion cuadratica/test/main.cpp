/*
    Nestor Alexander Castañeda Padrón
    Matricula: 362012103
    Grupo:	28B ISC
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discr, x1, x2, real, i;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discr = b * b - 4 * a * c;

    // condition for real and different roots
    if (discr > 0)
    {
        // sqrt() function returns square root
        x1 = (-b + sqrt(discr)) / (2 * a);
        x2 = (-b - sqrt(discr)) / (2 * a);

        printf("x1 = %.2f and x2 = %.2f", x1, x2);
    }

    //condition for real and equal roots
    else if (discr == 0)
    {
        x1 = x2 = -b / (2 * a);

        printf("x1 = x2 = %.2f", x1);
    }

    // if roots are not real
    else
    {
        real = -b / (2 * a);
        i = sqrt(-discr) / (2 * a);
        printf("x1 = %.2f+%.2fi and x2 = %.2f-%.2fi", real, i, real, i);
    }

    return 0;
}