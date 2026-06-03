/**
 * =================================================================================
 * MODULO 3.1: Estructura Condicional Múltiple (if - else if - else) - Notas
 * =================================================================================
 * Enunciado: "Escribe un programa que lea una calificación (0-100) y muestre 
 * si el estudiante está en nivel Excelente (90-100), Bueno (70-89) o 
 * Insuficiente (0-69)."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso ClasificacionNota
 *        Definir nota Como Entero
 *        Escribir "Ingrese la calificación (0-100):"
 *        Leer nota
 *        Si nota >= 90 Entonces
 *            Escribir "Nivel Excelente"
 *        Sino Si nota >= 70 Entonces
 *            Escribir "Nivel Bueno"
 *        Sino
 *            Escribir "Nivel Insuficiente"
 *        FinSi
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int nota;

    printf("Ingrese la calificacion (0-100): ");
    scanf("%d", &nota);

    // -----------------------------------------------------------------------------
    // Estructura if - else if - else (Decisión Múltiple Excluyente)
    // -----------------------------------------------------------------------------
    // - Las condiciones se evalúan en orden descendente.
    // - Al cumplirse una, se ignoran las restantes.
    
    // Extensión: Agregar categoría 100 -> "Calificacion perfecta"
    if (nota == 100) {
        printf("Calificacion perfecta\n");
    } else if (nota >= 90) {
        printf("Nivel Excelente\n");
    } else if (nota >= 70) {
        printf("Nivel Bueno\n");
    } else {
        printf("Nivel Insuficiente\n");
    }

    // -----------------------------------------------------------------------------
    // APRENDIZAJE ACTIVO: Ejercicios de análisis
    // -----------------------------------------------------------------------------

    // Ejercicio 1:
    if (nota >= 80) {
        printf("Nota mayor o igual a 80 (Excelente o Bueno alto)\n");
    } else {
        printf("Nota menor a 80\n");
    }

    // Ejercicio 2:
    if (nota >= 90) {
        printf("Excelente (90+)\n");
    } else if (nota >= 60) {
        printf("Aprobado regular (60-89)\n");
    } else {
        printf("Reprobado (Menos de 60)\n");
    }

    // -----------------------------------------------------------------------------
    // ERRORES DE ANÁLISIS COMUNES (Comentados):
    // -----------------------------------------------------------------------------
    //
    // ERROR DE NO EXCLUSIÓN:
    //      if (nota >= 90) { printf("Excelente"); }
    //      if (nota >= 70) { printf("Bueno"); }
    //
    //      -> ¿Cuál es el problema? Si la nota es 95, se cumple la primera y
    //         también se cumple la segunda, imprimiendo "ExcelenteBueno". 
    //         Al no usar 'else if', los bloques de código no son excluyentes.

    return 0;
}
