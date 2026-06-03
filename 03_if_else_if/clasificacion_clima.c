/**
 * =================================================================================
 * MODULO 3.2: Estructura Condicional Múltiple (if - else if - else) - Clima
 * =================================================================================
 * Enunciado: "Construir un algoritmo que solicite al usuario la temperatura en 
 * grados Celsius y clasifique el clima según el valor ingresado. Si la temperatura 
 * es menor a 15, debe indicar 'Clima frío'; si está entre 15 y 25, 'Clima templado'; 
 * si está entre 26 y 35, 'Clima cálido'; y si es mayor a 35, 'Clima muy caliente'."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso ClasificacionClima
 *        Definir temperatura Como Real
 *        Escribir "Ingrese la temperatura en grados Celsius:"
 *        Leer temperatura
 *        Si temperatura < 15 Entonces
 *            Escribir "Clima frío"
 *        Sino Si temperatura <= 25 Entonces
 *            Escribir "Clima templado"
 *        Sino Si temperatura <= 35 Entonces
 *            Escribir "Clima cálido"
 *        Sino
 *            Escribir "Clima muy caliente"
 *        FinSi
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h>

int main() {
    // Definimos una variable de tipo real (decimal/punto flotante)
    float temperatura; 

    printf("Ingrese la temperatura en Celsius: ");
    // Nota de formato:
    // - %f se utiliza para leer y escribir valores flotantes (float).
    scanf("%f", &temperatura);

    // -----------------------------------------------------------------------------
    // Clasificación del Clima por Rangos
    // -----------------------------------------------------------------------------
    // Extensión: Agregar categoría >40 -> "Calor extremo"
    if (temperatura > 40) {
        printf("Calor extremo\n");
    } else if (temperatura > 35) { // Esto cubre de 35.01 a 40
        printf("Clima muy caliente\n");
    } else if (temperatura >= 26) { // Esto cubre de 26 a 35
        printf("Clima calido\n");
    } else if (temperatura >= 15) { // Esto cubre de 15 a 25
        printf("Clima templado\n");
    } else { // Menor a 15
        printf("Clima frio\n");
    }

    // -----------------------------------------------------------------------------
    // APRENDIZAJE ACTIVO: Ejercicios de análisis
    // -----------------------------------------------------------------------------

    // Ejercicio 1:
    if (temperatura < 10) {
        printf("Hace bastante frio (Menos de 10)\n");
    } else {
        printf("No hace tanto frio (10 o mas)\n");
    }

    // Ejercicio 2:
    if (temperatura <= 20) {
        printf("Clima fresco/frio (<= 20)\n");
    } else if (temperatura <= 30) {
        printf("Clima agradable/calido (21-30)\n");
    } else {
        printf("Clima caluroso (> 30)\n");
    }

    // -----------------------------------------------------------------------------
    // ERRORES DE ANÁLISIS COMUNES (Comentados):
    // -----------------------------------------------------------------------------
    //
    // ERROR INTENCIONAL:
    //      if (temperatura < 15) { printf("Frio"); }
    //      if (temperatura <= 25) { printf("Templado"); }
    //
    //      -> ¿Cuál es el problema? Si la temperatura es 10, se cumple la primera 
    //         condición (imprime "Frio") y también la segunda (imprime "Templado").
    //         Los bloques no son excluyentes.

    return 0;
}
