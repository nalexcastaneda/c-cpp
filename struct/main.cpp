#include <stdio.h>

struct registro {
    char nom[20];
    char ap[20];
    char am[20];
    int age;
} obj[3];

main() {
    for (int i = 0; i < 3; i++) {
        printf("Nombre: ");
        scanf("%s", &obj[i].nom);
        printf("Apellido P: ");
        scanf("%s", &obj[i].ap);
        printf("Apellido M: ");
        scanf("%s", &obj[i].am);
        printf("Edad: ");
        scanf("%d", &obj[i].age);
    }
    for (int i = 0; i < 3; i++) {
        printf("\nRegistro %d: %s %s %s , %d", (i+1), obj[i].nom, obj[i].ap, obj[i].am,
               obj[i].age);
    }
}