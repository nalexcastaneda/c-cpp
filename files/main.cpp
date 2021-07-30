#include <fstream>
#include <iostream>
using namespace std;
void escritura();
int main(int argc, char const *argv[]) {
    escritura();
    return 0;
}
void escritura() {
    ofstream archivo;
    string nomArchivo, texto;
    printf("Introduce el nombre del archivo: ");
    getline(cin, nomArchivo);
    archivo.open(nomArchivo.c_str(), ios::out);
    if (archivo.fail()) {
        printf("Error al escribir archivo :(");
        exit(1);
    }
    archivo << "Prueba de escritura";
    archivo.close();
    printf("Archivo creado con exito");
}
