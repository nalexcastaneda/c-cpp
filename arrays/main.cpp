#include <stdio.h>
#include <stdlib.h>

void leerMatriz(int** M, int fil, int col);
void sumaMatrices();
void restaMatrices();
void multiplicacionMatrices();
void matrizInversa();
void matrizTranspuesta();
void matrizAdjunta();
void imprimirMatriz(int** M, int fil, int col);
void menu();

int main() {
    int opcion;

    do {
        menu();
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                sumaMatrices();
                break;

            case 2:
                restaMatrices();
                break;

            case 3:
                multiplicacionMatrices();
                break;

            case 4:
                matrizInversa();
                break;

            case 5:
                matrizTranspuesta();
                break;

            case 6:
                matrizAdjunta();
                break;

            case 7:
                printf("\n\nFIN DEL PROGRAMA\n\n");
                break;

            default:
                printf("\n\nOPCION NO VALIDA\n\n");
                break;
        }

    } while (opcion != 7);
}

void leerMatriz(int** M, int fil, int col) {
    printf("\nRellenar la matriz:\n");
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            printf("Matriz[", i, "][", j, "]: ");
            scanf("%d", &M[i][j]);
        }
    }
}

void sumaMatrices() {
    int fil, col;

    printf(
        "\nLAS MATRICES DEBEN TENER LA MISMA DIMENSION\n"
        "\nDimension de la matriz:");
    printf("\nFilas de la matriz: ");
    scanf("%d", &fil);
    printf("Columnas de la matriz: ");
    scanf("%d", &col);

    int** A = new int*[fil];
    for (int i = 0; i < fil; i++) A[i] = new int[col];

    int** B = new int*[fil];
    for (int i = 0; i < fil; i++) B[i] = new int[col];

    int** C = new int*[fil];
    for (int i = 0; i < fil; i++) C[i] = new int[col];

    scanf("\nDatos de la matriz A: ");
    leerMatriz(A, fil, col);

    scanf("\nDatos de la matriz B: ");
    leerMatriz(B, fil, col);

    for (int i = 0; i < fil; i++)
        for (int j = 0; j < col; j++) C[i][j] = A[i][j] + B[i][j];

    scanf("\nMatriz A:\n");
    imprimirMatriz(A, fil, col);
    scanf("\nMatriz B:\n");
    imprimirMatriz(B, fil, col);
    scanf("\nSuma de las matrices (A+B):\n");
    imprimirMatriz(C, fil, col);
}

void restaMatrices() {
    int fil, col;

    scanf("\nLAS MATRICES DEBEN TENER LA MISMA DIMENSION\n"
         "\nDimension de la matriz:");
    scanf("\nFilas de la matriz: ");
    scanf("%d",&fil);
    scanf("Columnas de la matriz: ");
    scanf("%d",&col);

    int** A = new int*[fil];
    for (int i = 0; i < fil; i++) A[i] = new int[col];

    int** B = new int*[fil];
    for (int i = 0; i < fil; i++) B[i] = new int[col];

    int** C = new int*[fil];
    for (int i = 0; i < fil; i++) C[i] = new int[col];

    scanf("\nDatos de la matriz A: ");
    leerMatriz(A, fil, col);

    scanf("\nDatos de la matriz B: ");
    leerMatriz(B, fil, col);

    for (int i = 0; i < fil; i++)
        for (int j = 0; j < col; j++) C[i][j] = A[i][j] - B[i][j];

    scanf("\nMatriz A:\n");
    imprimirMatriz(A, fil, col);
    scanf("\nMatriz B:\n");
    imprimirMatriz(B, fil, col);
    scanf("\nResta de las matrices (A-B):\n");
    imprimirMatriz(C, fil, col);
}

void multiplicacionMatrices() {
    int filA, colA, filB, colB;

    printf(
        "\nEL NUMERO DE COLUMNAS DE LA MATRIZ A"
        "\nDEBE COINCIDIR CON EL DE FILAS DE LA MATRI B\n");

    scanf("\nDimension de la matriz A:");
    scanf("\nFilas de la matriz: ");
    scanf("%d", &filA);
    scanf("Columnas de la matriz: ");
    scanf("%d", &colA);

    int** A = new int*[filA];
    for (int i = 0; i < filA; i++) A[i] = new int[colA];

    leerMatriz(A, filA, colA);

    printf("\nDimension de la matriz B:");
    printf("\nFilas de la matriz: ");
    scanf("%d", &filB);
    printf("Columnas de la matriz: ");
    scanf("%d", &colB);

    int** B = new int*[filB];
    for (int i = 0; i < filB; i++) B[i] = new int[colB];

    leerMatriz(B, filB, colB);

    int** C = new int*[filA];
    for (int i = 0; i < filA; i++) C[i] = new int[colA];

    if (colA == filB) {
        for (int i = 0; i < filA; ++i) {
            for (int j = 0; j < colB; ++j) {
                C[i][j] = 0;
                for (int z = 0; z < colA; ++z) C[i][j] += A[i][z] * B[z][j];
            }
        }

        printf("\nMatriz A:\n");
        imprimirMatriz(A, filA, colA);
        printf("\nMatriz B:\n");
        imprimirMatriz(B, filB, colB);
        printf("\nMultiplicacion de las matrices (A*B):\n");
        imprimirMatriz(C, filA, colB);

    } else
        printf(
            "\nNO SE PUEDEN MULTIPLICAR"
            "\nEL NUMERO DE COLUMNAS DE LA MATRIZ A"
            "\nDEBE COINCIDIR CON EL DE FILAS DE LA MATRI B");
}

void matrizInversa() {}

void matrizTranspuesta() {}

void matrizAdjunta() {}

void imprimirMatriz(int** M, int fil, int col) {
    for (int i = 0; i < fil; i++) {
        printf("\n| ");
        for (int j = 0; j < col; j++) 
        printf("%d ", M[i][j]);

        printf(" |");
    }
}

void menu() {
    printf(
        "\n         CALCULADORA DE MATRICES"
        "\n============================================"
        "\n1.- Suma de Matrices ............. (Pulsa 1)"
        "\n2.- Resta de Matrices ............ (Pulsa 2)"
        "\n3.- Multiplicacion de Matrices ... (Pulsa 3)"
        "\n4.- Matriz Inversa ............... (Pulsa 4)"
        "\n5.- Matriz Transpuesta ........... (Pulsa 5)"
        "\n6.- Matriz Adjunta ............... (Pulsa 6)"
        "\n7.- Terminar ..................... (Pulsa 7)"
        "\n============================================"
        "\nSELECCIONA UNA OPCION (1 - 7): ");
}