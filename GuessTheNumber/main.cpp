#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    int rango;
    srand ( time(NULL) );
    printf("---- Adivina el numero generado -----");
    printf("\n\nNiveles:\nFacil(1-10)   Medio(1-100)    Dificil(1-1000)     Extremo(1-10000)");
    printf("\n\nElige un nivel de dificultad: ");
    scanf("%d", &rango);
    switch (rango)
    {
    case 1:
        num = rand() % 10 + 1;
        printf("\n\tNivel seleccionado: Fácil %d");
        char str[4] = "Facil";
        break;
    case 2:
        num = rand() % 100 + 1;
        printf("\n\tNivel seleccionado: Medio %d",num);
        break;
    case 3:
        num = rand() % 1000 + 1;
        printf("\n\tNivel seleccionado: Dificil %d",num);
        break;
    case 4:
        num = rand() % 10000 + 1;
        printf("\n\tNivel seleccionado: Extremo %d",num);
        break;
    
    default:
        break;
    }
    printf("Ingresa un número demtro del rango: ")
    
}

int verify(num, randN) {
    while (num!=randN)
    {
        if(num>randN){
            printf("Intenta un numero menor");
        } else if(num<randN){
            printf("Intenta un numero mayor");
        } else {
            printf("El numero esta fuera de rango");
        }
    }
    
}