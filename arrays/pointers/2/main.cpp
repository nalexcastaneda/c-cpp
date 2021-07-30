#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int ar[5];
    int *num;
    ar[0] = 6;
    ar[1] = 5;
    ar[2] = 2;
    ar[3] = 7;
    ar[4] = 8;

    num = &ar[0];
    for (int i = 0; i < 5; i++) {
        if (*num % 2 == 0) {
            printf(
                "El elemento %d del arreglo es %d con direccion de memoria %d\n",
                i, *num, num);
        }
        num += 1;
    }

    return 0;
}
