/**
 * =================================================================================
 * MODULO 2.3: Estructura Condicional Doble Anidada - Mayor de 3 Numeros
 * =================================================================================
 * Enunciado: "Diseñar un algoritmo que solicite al usuario 3 valores enteros, 
 * comparelos usando decisiones dobles anidadas y determine cual de ellos es el mayor."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso MayorDeTres
 *        Definir n1, n2, n3 Como Entero
 *        Escribir "Introduzca 3 valores enteros:"
 *        Leer n1, n2, n3
 *        Si n1 > n2 Entonces
 *            Si n1 > n3 Entonces
 *                Escribir "El mayor es ", n1
 *            Sino
 *                Escribir "El mayor es ", n3
 *            FinSi
 *        Sino
 *            Si n2 > n3 Entonces
 *                Escribir "El mayor es ", n2
 *            Sino
 *                Escribir "El mayor es ", n3
 *            FinSi
 *        FinSi
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Introduzca 3 valores enteros: ");
    // En scanf podemos leer multiples variables en una sola linea separandolas con espacio en el formato
    scanf("%d %d %d", &n1, &n2, &n3);

    // -----------------------------------------------------------------------------
    // Estructuras Condicionales Anidadas (if dependientes)
    // -----------------------------------------------------------------------------
    if (n1 > n2) {
        // Si n1 es mayor que n2, el mayor esta entre n1 y n3
        if (n1 > n3) {
            printf("El mayor es %d\n", n1);
        } else {
            printf("El mayor es %d\n", n3);
        }
    } else {
        // Si n1 NO es mayor que n2, el mayor esta entre n2 y n3
        if (n2 > n3) {
            printf("El mayor es %d\n", n2);
        } else {
            printf("El mayor es %d\n", n3);
        }
    }

    // -----------------------------------------------------------------------------
    // ANALISIS DE DISENO:
    // La anidacion permite descartar variables de forma ramificada, reduciendo el 
    // numero de comparaciones necesarias en ejecucion.
    // -----------------------------------------------------------------------------

    return 0;
}
