/**
 * =================================================================================
 * MODULO 4.2: Estructura de Selección Múltiple (switch) - Meses del Año
 * =================================================================================
 * Enunciado: "Diseñar un algoritmo que solicite al usuario un número entero entre 
 * 1 y 12 y muestre el nombre del mes correspondiente junto con la cantidad de días 
 * que tiene. Si el número ingresado no está dentro del rango válido, debe mostrar 
 * el mensaje 'Número inválido'."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso MesDias
 *        Definir mes Como Entero
 *        Escribir "Ingrese un número del 1 al 12:"
 *        Leer mes
 *        Segun mes Hacer
 *            1: Escribir "Enero - 31 días"
 *            2: Escribir "Febrero - 28 días"
 *            ...
 *            De Otro Modo: Escribir "Número inválido"
 *        FinSegun
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int mes;

    printf("Ingrese un numero del 1 al 12: ");
    scanf("%d", &mes);

    // -----------------------------------------------------------------------------
    // Estructura de Selección Múltiple
    // -----------------------------------------------------------------------------
    switch (mes) {
        case 1:  printf("Enero - 31 dias\n"); break;
        case 2:  printf("Febrero - 28 dias\n"); break;
        case 3:  printf("Marzo - 31 dias\n"); break;
        case 4:  printf("Abril - 30 dias\n"); break;
        case 5:  printf("Mayo - 31 dias\n"); break;
        case 6:  printf("Junio - 30 dias\n"); break;
        case 7:  printf("Julio - 31 dias\n"); break;
        case 8:  printf("Agosto - 31 dias\n"); break;
        case 9:  printf("Septiembre - 30 dias\n"); break;
        case 10: printf("Octubre - 31 dias\n"); break;
        case 11: printf("Noviembre - 30 dias\n"); break;
        case 12: printf("Diciembre - 31 dias\n"); break;
        default:
            printf("Numero invalido\n");
    }

    // -----------------------------------------------------------------------------
    // APRENDIZAJE ACTIVO: Ejercicio 4 (Extensión)
    // -----------------------------------------------------------------------------
    // Agrupar los meses para indicar de forma resumida si tienen 30 o 31 días (o 28)
    if (mes >= 1 && mes <= 12) {
        switch (mes) {
            case 1: // Enero
            case 3: // Marzo
            case 5: // Mayo
            case 7: // Julio
            case 8: // Agosto
            case 10: // Octubre
            case 12: // Diciembre
                printf("Este mes tiene 31 dias.\n");
                break;
            case 4: // Abril
            case 6: // Junio
            case 9: // Septiembre
            case 11: // Noviembre
                printf("Este mes tiene 30 dias.\n");
                break;
            case 2: // Febrero
                printf("Este mes tiene 28 dias (o 29 en bisiesto).\n");
                break;
        }
    }

    return 0;
}
