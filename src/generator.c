#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../inc/generator.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void generar_logs_aleatorios(int cantidad) {
    FILE *archivo = fopen("logs/ejemplo.log", "w");
    
    if (archivo == NULL) {
        printf("Error: No se puede crear el archivo de logs\n");
        return;
    }
    
    static int semilla_inicializada = 0;
    if (!semilla_inicializada) {
        srand(time(NULL));
        semilla_inicializada = 1;
    }
    
    for (int i = 0; i < cantidad; i++) {
        int hora = rand() % 24;
        int minuto = rand() % 60;
        
        const char *tipo;
        if (rand() % 100 < 70) {
            tipo = "exitoso";
        } else {
            tipo = "fallido";
        }
        
        int octeto3 = rand() % 256;
        int octeto4 = rand() % 256;
        
        fprintf(archivo, "2024-01-01 %02d:%02d - Login %s - IP: 192.168.%d.%d\n",
                hora, minuto, tipo, octeto3, octeto4);
        
        #ifdef _WIN32
            Sleep(1);
        #else
            usleep(1000);
        #endif
        
        if (i % 30 == 0 || i == cantidad - 1) {
            float porcentaje = ((i + 1) * 100.0f) / cantidad;
            int barras_llenas = (porcentaje / 100.0f) * 20;
            
            printf("\rGenerando logs: [");
            for (int j = 0; j < 20; j++) {
                if (j < barras_llenas) {
                    printf("=");
                } else if (j == barras_llenas) {
                    printf(">");
                } else {
                    printf(" ");
                }
            }
            printf("] %.1f%% (%d/%d)", porcentaje, i + 1, cantidad);
            fflush(stdout);
        }
    }
    
    printf("\n");
    fclose(archivo);
}