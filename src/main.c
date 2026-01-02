#include <stdio.h>
#include <string.h>
#include "../inc/analyzer.h"
#include "../inc/generator.h"

int main() {
    generar_logs_aleatorios(20);
    int verificar = 0;
    
    while(verificar == 0) {
        printf("=== BIENVENIDO A LOG ANALYZER V3.1 ===\n"); 
        FILE *archivo = fopen("logs/ejemplo.log", "r");
        
        if (archivo == NULL) {
            printf("ERROR: Revise si la ruta que ha seleccionado existe \n");
            return 1; 
        }

        printf("1. Show statistics\n");
        printf("2. List successful logins\n");
        printf("3. List failed logins\n");
        printf("4. Show all logs\n");
        printf("5. Exit\n");
        printf("6. Regenerate random logs\n");
        printf("Choice: "); 
        int opcion;
        scanf("%d", &opcion); 

        char linea[256];

        if (opcion == 5) {
            printf("EXIT...\n");
            verificar = 1;
            break;
        }

        if (opcion == 1) {
            int exitoso = 0;
            int fallidos = 0;
            int contador = 0;
            
            while (fgets(linea, sizeof(linea), archivo) != NULL) {
                contador++;
                if (strstr(linea, "exitoso") != NULL) {
                    exitoso++;
                }
                if (strstr(linea, "fallido") != NULL) {
                    fallidos++;
                }
            }
            
            float porcentaje = calcular_porcentaje_fallos(fallidos, contador);
            printf("\n=== STATISTICS ===\n");
            printf("Total logs entries: %d\n", contador);
            printf("Successful logins: %d\n", exitoso);
            printf("Failed logins: %d\n", fallidos);
            printf("Failure rate: %.1f%%\n", porcentaje);
            
        } else if (opcion == 2) {
            rewind(archivo);
            printf("\nSuccessful logins:\n");
            while(fgets(linea, sizeof(linea), archivo) != NULL) {
                if(strstr(linea, "exitoso")) {
                    printf("%s", linea);
                }
            }
        } else if (opcion == 3) {
            rewind(archivo);
            printf("\nFailed logins:\n");
            while(fgets(linea, sizeof(linea), archivo) != NULL) {
                if(strstr(linea, "fallido")) {
                    printf("%s", linea);
                }
            }
        } else if (opcion == 4) {
            rewind(archivo);
            printf("\n=== TOTAL LOGS ===\n");
            while(fgets(linea, sizeof(linea), archivo)) {
                printf("%s", linea);
            }
        } else if (opcion == 6) {
            generar_logs_aleatorios(20);
        }else {
            printf("Opción inválida. Intente 1-5.\n");
        }

        // Preguntar si continuar SOLO para opciones 1-4
        if (opcion >= 1 && opcion <= 4 || opcion == 6) {
            char continuar;
            printf("\n¿Continuar? (s/n): ");
            scanf(" %c", &continuar);  
            
            if(continuar == 'n' || continuar == 'N') {
                verificar = 1;
            }
        }
        
        fclose(archivo); 
    }
    
    return 0;
}