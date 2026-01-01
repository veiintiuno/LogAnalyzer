#include <stdio.h>
#include <string.h>

int main() {
    printf("=== LOG ANALYZER V1.0 ===\n");
    FILE *archivo = fopen("logs/ejemplo.log", "r");

    if (archivo == NULL) {
        printf("ERROR: Revise si la ruta que ha seleccionado existe \n");
        return 1;
    }
    printf("Exito, se ha abierto el archivo correctamente..\n");

    char linea[256];
    int contador = 0;
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        contador++;
        printf("Linea %d: %s\n", contador, linea);
    }
    printf("=== TOTAL: %d lineas ===\n", contador);

    fclose(archivo);
    return 0;

}