#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int op;
    char opt;
    printf("Escribe la opción: ");
    switch (op)
    {
    case 1:
        printf("\nOpción 1");
        break;
    case 2:
        printf("\nOpción 2");
        break;

    default:
        printf("\nOpción Incorrecta");
        break;
    }           
}