#include <stdio.h>
#include <string.h>
#include "../inc/analyzer.h"

int main() {
    printf("=== LOG ANALYZER V1.0 ===\n");
    FILE *archivo = fopen("logs/ejemplo.log", "r");
    int exitoso = 0;
    int fallidos = 0;
    if (archivo == NULL) {
        printf("ERROR: Revise si la ruta que ha seleccionado existe \n");
        return 1;
    }
    printf("Exito, se ha abierto el archivo correctamente..\n");

    char linea[256];
    int contador = 0;
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        contador++;
        if (strstr(linea , "exitoso") != NULL) {
            exitoso ++;
        }
        if (strstr(linea , "fallido") != NULL) {
            fallidos ++;
        }
    }
    float porcentaje = calcular_porcentaje_fallos(fallidos, contador);
    printf("=== TOTAL: %d lineas ===\n", contador);
    printf("Logs exitosos: %d\n", exitoso);
    printf("Logs fallidos: %d\n", fallidos);
    printf("Porcentaje de fallos: %.1f%%\n", porcentaje);

    fclose(archivo);
    return 0;

}