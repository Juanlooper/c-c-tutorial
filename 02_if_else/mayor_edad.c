/**
 * =================================================================================
 * MODULO 2.1: Estructura Condicional Doble (if-else) - Mayoria de Edad
 * =================================================================================
 * Enunciado: "Elaborar un algoritmo que solicite al usuario su edad y determine 
 * si es mayor o menor de edad. Si la edad ingresada es mayor o igual a 18, debe 
 * mostrar el mensaje 'Es mayor de edad'; en caso contrario, debe mostrar 'Es 
 * menor de edad'."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso MayorEdad
 *        Definir edad Como Entero
 *        Escribir "Ingrese su edad:"
 *        Leer edad
 *        Si edad >= 18 Entonces
 *            Escribir "Es mayor de edad"
 *        Sino
 *            Escribir "Es menor de edad"
 *        FinSi
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int edad; // Variable que almacenará la edad

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    // -----------------------------------------------------------------------------
    // Estructura if-else (Selección Doble)
    // -----------------------------------------------------------------------------
    // - El bloque 'if' se ejecuta si la condición lógica (edad >= 18) es VERDADERA.
    // - El bloque 'else' se ejecuta si la condición lógica es FALSA.
    if (edad >= 18) {
        printf("Es mayor de edad\n");
    } else {
        printf("Es menor de edad\n");
    }

    // -----------------------------------------------------------------------------
    // APRENDIZAJE ACTIVO: Ejercicios teóricos / incompletos
    // -----------------------------------------------------------------------------
    
    // Ejercicio 1: Completa los mensajes correspondientes
    if (edad >= 30) {
        printf("Es un adulto maduro (30 o mas)\n"); // Completa el espacio en blanco
    } else {
        printf("Es menor de 30 anos\n"); // Completa el espacio en blanco
    }

    // Ejercicio 2: Rangos con else-if (Anidado)
    if (edad < 0) {
        printf("Edad invalida: no puede ser negativa\n");
    } else if (edad >= 18) {
        printf("Es mayor de edad legal\n");
    } else {
        printf("Es menor de edad legal\n");
    }

    // Ejercicio 3: Responder mentalmente o analizar:
    // 1) ¿Qué ocurre si edad = 18?
    //    -> La condición (edad >= 18) es VERDADERA (porque 18 es igual a 18).
    //       Se imprime "Es mayor de edad" y "Es mayor de edad legal".
    //
    // 2) ¿Qué ocurre si edad = -1?
    //    -> En la estructura principal, imprime "Es menor de edad" (porque -1 >= 18 es FALSO).
    //       En el Ejercicio 2, detecta "Edad invalida: no puede ser negativa".

    // -----------------------------------------------------------------------------
    // ERRORES DE ANÁLISIS COMUNES (Comentados):
    // -----------------------------------------------------------------------------
    //
    // ERROR 1 (Asignación accidental):
    //      if (edad = 18) { ... }
    //      -> Asigna 18 a 'edad', la condición evalúa a 18 (Verdadero). Siempre entra.
    //
    // ERROR 2 (Paso por valor incorrecto):
    //      scanf("%d", edad); // Falta el '&'.
    //
    // ERROR 3 (Falta de paréntesis):
    //      if edad >= 18 { ... } // Error de sintaxis del compilador.
    //
    // ERROR 4 (Error de lógica de límites):
    //      if (edad > 18) { printf("Mayor de edad"); }
    //      -> Deja por fuera el caso exacto de 18 años, evaluándolo incorrectamente.

    return 0;
}
