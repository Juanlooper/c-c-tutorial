/**
 * =================================================================================
 * MODULO 2.2: Doble Condicional - Paridad y Signo (Par/Impar, Positivo/Negativo)
 * =================================================================================
 * Enunciado: "Diseñar un algoritmo que solicite al usuario un número entero y 
 * determine dos características: si el número es par o impar, y si es positivo 
 * o negativo (o cero). El programa debe mostrar mensajes indicando cada una de 
 * estas condiciones."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso ParImparPositivoNegativo
 *        Definir numero Como Entero
 *        Escribir "Ingrese un número entero:"
 *        Leer numero
 *        Si numero MOD 2 = 0 Entonces
 *            Escribir "El número es par"
 *        Sino
 *            Escribir "El número es impar"
 *        FinSi
 *        Si numero > 0 Entonces
 *            Escribir "El número es positivo"
 *        Sino
 *            Escribir "El número es negativo o cero"
 *        FinSi
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // -----------------------------------------------------------------------------
    // Evaluación 1: Par o Impar usando el operador módulo (%)
    // -----------------------------------------------------------------------------
    // - En C, el operador '%' calcula el residuo de la división entera (como MOD en PSeInt).
    if (numero % 2 == 0) {
        printf("El numero es par\n");
    } else {
        printf("El numero es impar\n");
    }

    // -----------------------------------------------------------------------------
    // Evaluación 2: Positivo, Negativo o Cero (con if - else if - else)
    // -----------------------------------------------------------------------------
    if (numero > 0) {
        printf("El numero es positivo\n");
    } else if (numero < 0) {
        printf("El numero es negativo\n");
    } else {
        printf("El numero es cero\n");
    }

    // -----------------------------------------------------------------------------
    // EJERCICIO PRACTICO 3: Ampliación del programa
    // -----------------------------------------------------------------------------
    // Evaluar si el número es múltiplo de 5:
    if (numero % 5 == 0) {
        printf("El numero es multiplo de 5\n");
    } else {
        printf("El numero NO es multiplo de 5\n");
    }

    // -----------------------------------------------------------------------------
    // ERRORES DE ANÁLISIS COMUNES (Comentados):
    // -----------------------------------------------------------------------------
    //
    // ERROR INTENCIONAL:
    //      if (numero > 0) { printf("Positivo"); } else { printf("Negativo"); }
    //      -> ¿Cuál es el problema? No contempla el caso especial cuando el número es 0,
    //         clasificando el 0 erróneamente como negativo.

    return 0;
}
