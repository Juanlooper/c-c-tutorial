/**
 * =================================================================================
 * MODULO 1: Estructura Condicional Simple (if)
 * =================================================================================
 * Enunciado: "Diseñar un algoritmo que solicite al usuario un número entero y 
 * determine si dicho número es positivo. En caso de serlo, debe mostrar un 
 * mensaje indicando que el número es positivo."
 * 
 * EQUIVALENCIA EN PSEINT:
 *    Proceso NumeroPositivo
 *        Definir numero Como Entero
 *        Escribir "Ingrese un número entero:"
 *        Leer numero
 *        Si numero > 0 Entonces
 *            Escribir "El número es positivo"
 *        FinSi
 *    FinProceso
 * =================================================================================
 */

#include <stdio.h> // Biblioteca estándar de entrada y salida (contiene printf y scanf)

int main() {
    // -----------------------------------------------------------------------------
    // Paso 1: Declarar la variable
    // -----------------------------------------------------------------------------
    int numero; // Variable para almacenar el valor entero ingresado

    // -----------------------------------------------------------------------------
    // Paso 2: Pedir dato al usuario
    // -----------------------------------------------------------------------------
    printf("Ingrese un numero entero: "); // Mensaje en pantalla
    
    // scanf lee la entrada de consola y la guarda en la dirección de memoria.
    // - %d indica que se leerá un número entero (decimal).
    // - & (delante de 'numero') obtiene la dirección de memoria de la variable.
    scanf("%d", &numero); 

    // -----------------------------------------------------------------------------
    // Paso 3: Condición (if simple)
    // -----------------------------------------------------------------------------
    // - Los paréntesis ( ) son obligatorios y encierran la condición lógica.
    // - Las llaves { } delimitan el bloque de código que se ejecutará si es verdadero.
    // - \n es un carácter de escape que representa un salto de línea (newline).
    if (numero > 0) { 
        printf("El numero es positivo\n"); 
    }

    // -----------------------------------------------------------------------------
    // EJERCICIO PRACTICO 1: Completa el código
    // -----------------------------------------------------------------------------
    // ¿Qué escribirías en la línea del printf para indicar que es negativo?
    if (numero < 0) {
        printf("El numero es negativo\n"); // Completa el espacio en blanco "_________"
    }

    // -----------------------------------------------------------------------------
    // CODIGO PARA ANALISIS: ¿Por qué es incorrecto usar '=' en lugar de '=='?
    // -----------------------------------------------------------------------------
    // Si escribes:
    //      if (numero = 0) { printf("Es cero"); }
    //
    // Ocurre lo siguiente:
    // 1. '=' es asignación: Cambia el valor de 'numero' a 0.
    // 2. C interpreta la condición completa como el valor asignado (0).
    // 3. En C, el número 0 se evalúa siempre como FALSO. Por lo tanto, ¡este bloque
    //    del if nunca se ejecutaría, y habrás destruido el valor original de tu variable!
    //
    // La forma correcta para comparar es con '==':
    if (numero == 0) {
        printf("El numero es cero\n");
    }

    // -----------------------------------------------------------------------------
    // ERRORES COMUNES PARA ANALIZAR (Comentados para no romper la compilación):
    // -----------------------------------------------------------------------------
    //
    // ERROR TIPO A (Error de memoria / Crash):
    //      scanf("%d", numero); // Falta el operador '&', produce error al ejecutar.
    //
    // ERROR TIPO B (Error de sintaxis / No compila):
    //      if numero > 0 { printf("Positivo"); } // Faltan los paréntesis en la condición.
    
    return 0; // Fin del programa (retorna 0 para indicar éxito)
}
