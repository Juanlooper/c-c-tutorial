/**
 * =================================================================================
 * MODULO 4.1: Estructura de Selección Múltiple (switch) - Día de la Semana
 * =================================================================================
 * Enunciado: "Diseñar un algoritmo que solicite al usuario un número entero entre 
 * 1 y 7 y muestre el día de la semana correspondiente. Si el número ingresado no 
 * está dentro de ese rango, debe mostrar el mensaje 'Número inválido'."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso DiaSemana
 *        Definir numero Como Entero
 *        Escribir "Ingrese un número del 1 al 7:"
 *        Leer numero
 *        Segun numero Hacer
 *            1: Escribir "Lunes"
 *            2: Escribir "Martes"
 *            3: Escribir "Miércoles"
 *            4: Escribir "Jueves"
 *            5: Escribir "Viernes"
 *            6: Escribir "Sábado"
 *            7: Escribir "Domingo"
 *            De Otro Modo: Escribir "Número inválido"
 *        FinSegun
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &numero);

    // -----------------------------------------------------------------------------
    // Estructura switch (Selección Múltiple por Casos)
    // -----------------------------------------------------------------------------
    // - switch(variable) evalúa una variable entera o de tipo char.
    // - case valor: define la acción para un caso exacto.
    // - break: detiene la ejecución del switch. ¡Si falta, el programa continuará
    //   ejecutando los siguientes casos secuencialmente!
    // - default: se ejecuta si no coincide ningún caso (como 'De Otro Modo').
    switch (numero) {
        case 1:
            printf("Lunes\n");
            break; 
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Numero invalido\n");
    }

    // -----------------------------------------------------------------------------
    // APRENDIZAJE ACTIVO: Ejercicio 3 (Extensión)
    // -----------------------------------------------------------------------------
    // Mostrar si el día es laboral (Lunes a Viernes) o fin de semana (Sábado o Domingo)
    // Podemos agrupar múltiples casos sin colocar 'break' entre ellos para hacer OR lógico:
    if (numero >= 1 && numero <= 7) {
        switch (numero) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("Es un dia laboral (semana)\n");
                break;
            case 6:
            case 7:
                printf("Es fin de semana\n");
                break;
        }
    }

    // -----------------------------------------------------------------------------
    // ERRORES DE SINTAXIS Y LOGICA COMUNES (Comentados):
    // -----------------------------------------------------------------------------
    //
    // ERROR 1 (Falta de paréntesis):
    //      switch numero { ... }
    //
    // ERROR 2 (Falta de dos puntos en el caso):
    //      case 1 printf("Lunes");
    //
    // ERROR 3 (Falta de break):
    //      case 2: printf("Martes"); // Sin break, imprimirá "Martes" y "Miercoles"...
    //
    // ERROR 4 (Uso de sentencias directamente en el switch sin case):
    //      switch (numero) { printf("Hola"); }

    return 0;
}
