#include "../inc/analyzer.h"
float calcular_porcentaje_fallos(int fallidos, int total) {
    if (total == 0) {
        return 0.0;
    }
    return ((float)fallidos * 100.0) / (float)total;
}