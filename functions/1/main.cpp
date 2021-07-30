#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <curses.h>

float n1, n2, res;
char op;

float sum(float, float);
float dif(float, float);
float mul(float, float);
float div(float, float);

int main(int argc, char const *argv[])
{
    printf("\nIngresa el primer numero: ");
    scanf("%f", &n1);
    printf("\nIngresa el primer numero: ");
    scanf("%f", &n1);
    printf("\nSuma 1 \nResta 2 \nMultiplicación 3 \n Division 4");
    printf("\nElige un opción: ");
    op = getch();
    return 0;
}
