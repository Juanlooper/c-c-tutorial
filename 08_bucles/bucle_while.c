/**
 * =================================================================================
 * MODULO 8.1: Estructura Repetitiva (Ciclo while)
 * =================================================================================
 * El ciclo while repite un bloque de codigo mientras una condicion logica sea 
 * verdadera. La condicion se evalua al principio del ciclo.
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Mientras carac <> 'A' Hacer
 *        Leer carac
 *    FinMientras
 * =================================================================================
 */

#include <stdio.h>

int main() {
    char carac;
    carac = '\0'; // Inicializamos el caracter con un valor vacio

    printf("Escribe caracteres uno a uno. El ciclo terminara al escribir la letra 'A':\n");

    // -----------------------------------------------------------------------------
    // Estructura Repetitiva while
    // -----------------------------------------------------------------------------
    while (carac != 'A') {
        // getchar() captura el siguiente caracter del buffer de entrada.
        // Nota teorica: getchar() lee de la entrada estándar con buffer. 
        // Si ingresas "HolaA" y presionas Enter, el bucle procesara cada letra 
        // individualmente de forma muy rapida hasta encontrar la 'A' y salir.
        carac = getchar(); 
        
        // Evitamos imprimir el salto de linea ('\n') generado al pulsar Enter
        if (carac != '\n' && carac != 'A') {
            printf("Caracter procesado: %c\n", carac);
        }
    }

    printf("\nBucle finalizado con exito al detectar la letra 'A'.\n");

    return 0;
}
