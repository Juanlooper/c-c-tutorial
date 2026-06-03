/**
 * =================================================================================
 * MODULO 8.2: Estructura Repetitiva (Ciclo for) y sentencia break
 * =================================================================================
 * El ciclo for es una estructura especializada en repeticiones controladas por 
 * una variable contador. Su formato es:
 *    for (inicializacion; condicion_limite; modificador)
 * 
 * Sentencia break:
 * Permite forzar la terminacion inmediata de cualquier ciclo (for, while), 
 * saltandose la prueba condicional habitual y pasando directamente a la 
 * siguiente linea despues del bucle.
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int x;
    int t;

    // -----------------------------------------------------------------------------
    // 1. Ciclo for de cuenta regresiva (de 3 a 1)
    // -----------------------------------------------------------------------------
    printf("1. CUENTA REGRESIVA CON FOR:\n");
    for (x = 3; x > 0; x--) {
        printf("X = %d\n", x);
    }
    printf("¡Lanzamiento!\n\n");

    // -----------------------------------------------------------------------------
    // 2. Ciclo for con interrupcion prematura usando break
    // -----------------------------------------------------------------------------
    printf("2. BUCLE HASTA 100 CON SALIDA TEMPRANA (break a los 10):\n");
    for (t = 0; t < 100; t++) {
        printf("%d ", t);
        
        // Cuando t alcanza el valor 10, se cumple la condicion y el break 
        // termina el ciclo inmediatamente.
        if (t == 10) {
            break;
        }
    }
    printf("\nBucle finalizado. El valor final de t es: %d\n", t);

    return 0;
}
