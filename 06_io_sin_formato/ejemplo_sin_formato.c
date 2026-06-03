/**
 * =================================================================================
 * MODULO 6: Entrada / Salida de Datos sin Formato
 * =================================================================================
 * En C, las funciones de E/S sin formato se especializan en capturar e imprimir 
 * caracteres individuales o cadenas completas (incluyendo espacios) sin necesidad 
 * de especificadores de formato como %d o %f.
 * 
 * Funciones de caracteres:
 * - getchar() (stdio.h): Lee un caracter. Espera a que presiones Enter y hace eco.
 * - getch()   (conio.h): Lee un caracter inmediatamente sin mostrarlo en pantalla.
 * - getche()  (conio.h): Lee un caracter inmediatamente y lo muestra en pantalla.
 * - putchar() (stdio.h): Despliega un solo caracter en pantalla.
 * - putch()   (conio.h): Despliega un solo caracter en pantalla.
 * 
 * Funciones de strings (cadenas):
 * - gets()  (stdio.h): Lee una cadena completa incluyendo espacios.
 * - puts()  (stdio.h): Imprime una cadena en pantalla y añade un salto de linea.
 * =================================================================================
 */

#include <stdio.h>
#include <conio.h> // Necesario en Windows/MinGW para getch, getche y putch

int main() {
    char vocal;
    char direccion[50];

    // -----------------------------------------------------------------------------
    // 1. Captura de un caracter con getche() y putchar()
    // -----------------------------------------------------------------------------
    printf("1. Escribe una vocal (se mostrara de inmediato al presionarla): ");
    vocal = getche(); // Lee e imprime el caracter al instante sin presionar Enter
    printf("\nEl caracter guardado fue: ");
    putchar(vocal); // Muestra el caracter en pantalla
    printf("\n\n");

    // -----------------------------------------------------------------------------
    // 2. Captura de un caracter oculto con getch() y putch()
    // -----------------------------------------------------------------------------
    printf("2. Escribe una tecla secreta (no se vera en pantalla al presionarla): ");
    vocal = getch(); // Lee de inmediato y lo mantiene oculto en la terminal
    printf("\nRevelando tu tecla secreta: ");
    putch(vocal); // Muestra la tecla leida
    printf("\n\n");

    // -----------------------------------------------------------------------------
    // 3. Captura con gets() y salida con puts()
    // -----------------------------------------------------------------------------
    // Limpiamos el buffer de entrada antes de leer la cadena
    // En Windows se suele usar fflush(stdin), pero fflush solo esta definido para salida.
    // Una alternativa portable es leer los caracteres restantes hasta el salto de linea:
    // while (getchar() != '\n'); 

    printf("3. Ingrese su direccion completa (puede incluir espacios): ");
    // Nota: gets() puede generar una advertencia al compilar en compiladores modernos
    // porque no limita el tamaño de la entrada, pero es la funcion de tu guia practica.
    gets(direccion); 

    printf("\nLa direccion ingresada es: \n");
    puts(direccion); // Imprime el string y agrega automaticamente un salto de linea

    // Imprimiendo una cadena fija con puts:
    puts("Fin del ejemplo de E/S sin formato");

    return 0;
}
