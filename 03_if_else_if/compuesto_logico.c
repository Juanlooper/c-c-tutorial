/**
 * =================================================================================
 * MODULO 3.3: Condiciones Compuestas con Operadores Logicos
 * =================================================================================
 * En C, podemos combinar multiples condiciones en una sola sentencia if 
 * usando los operadores logicos:
 * - && (AND / Y logico): Es verdadero si todas las condiciones son verdaderas.
 * - || (OR / O logico): Es verdadero si al menos una de las condiciones es verdadera.
 * - !  (NOT / Negacion): Invierte el valor logico (verdadero a falso y viceversa).
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Si (edad >= 18) Y (es_estudiante == 1) Entonces ...
 *    Si (edad < 12) O (edad >= 60) Entonces ...
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int edad;
    int es_estudiante; // Usamos 1 para verdadero y 0 para falso (en C no hay tipo boolean nativo en C90/C99 basico)

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("¿Es estudiante? (Escriba 1 para SI, 0 para NO): ");
    scanf("%d", &es_estudiante);

    // -----------------------------------------------------------------------------
    // 1. Operador AND (&&)
    // -----------------------------------------------------------------------------
    // Se cumple si la edad esta entre 18 y 25 ANOS Y ademas es estudiante.
    if (edad >= 18 && edad <= 25 && es_estudiante == 1) {
        printf("Felicidades: Aplica para la beca de estudiante universitario.\n");
    } else {
        printf("No aplica para la beca universitaria.\n");
    }

    // -----------------------------------------------------------------------------
    // 2. Operador OR (||)
    // -----------------------------------------------------------------------------
    // Se aplica descuento en transporte si es menor de 12 anos O mayor de 60 anos.
    if (edad < 12 || edad >= 60) {
        printf("Aplica para descuento de tarifa preferencial en transporte.\n");
    } else {
        printf("Tarifa de transporte regular.\n");
    }

    // -----------------------------------------------------------------------------
    // 3. Operador NOT (!)
    // -----------------------------------------------------------------------------
    // Si NO es estudiante (es_estudiante es 0, por lo tanto !es_estudiante es verdadero)
    if (!es_estudiante) {
        printf("Nota: Los no-estudiantes deben pagar tarifa completa de eventos.\n");
    } else {
        printf("Nota: Presente su carnet en taquilla.\n");
    }

    return 0;
}
