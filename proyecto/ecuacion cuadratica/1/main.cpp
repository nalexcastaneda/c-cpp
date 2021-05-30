#include <stdio.h>
#include <math.h>
#include <float.h>

int main(int argc, char const *argv[]) {
    int r;
    do {
        float a, b, c, x1, x2, i1, i2, discr;
        printf("Escribe los valores para calcular la ecuacion cuadratica.\n");
        printf("Introduce A: ");
        scanf("%f", &a);      
        printf("Introduce B: ");
        scanf("%f", &b);
        printf("Introduce C: ");
        scanf("%f", &c);
        discr = pow(b, 2) - (4 * a * c);
            //Numeros reales con raices diferentes
            if (a > 0) {
                x1 = (-b + sqrt(discr)) / (2 * a);
                x2 = (-b - sqrt(discr)) / (2 * a);
                printf("x1= %.2f, x2=%.2f", x1, x2);
            } else if(discr == 0){ /* Reales con raices iguales */
                x1 = -b/(2*a);
                x2 = x1;
                printf("x1 = %.2f x2 = %.2f", x1, x2);
            }
            else {
                x1 = (-b) / (2 * a);
                x2 = x1;
                i1 = sqrt(abs(discr)) / (2 * a);
                i2 = -i1;
                printf("x1= %.2f, i1= %.2f, x2=%.2f, i2=%.2f", x1, i1, x2, i2);
            }

        printf("\n\nComenzar de nuevo? Si(1)/No(2): ");
        scanf("%d", &r);
        while (r<1 || r>2) {
            printf("Opcion invalida. Elige 1 para repetir o 2 para terminar: ");
            scanf("%d", &r);
        }      
    } while (r == 1);
    if(r==2){
        printf("Terminado");
    }
    return 0;
}
