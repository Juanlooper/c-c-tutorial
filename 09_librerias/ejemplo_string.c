#include <stdio.h>
#include <string.h>

/**
 * =================================================================================
 * MODULO 9: Libreria <string.h>
 * =================================================================================
 * Este ejemplo demuestra el uso de las funciones mas comunes para manipulacion
 * de cadenas de texto disponibles en la libreria estandar <string.h>.
 * 
 * NOTA: En C, las cadenas no son un tipo de dato nativo (como en C++ con std::string),
 * sino que se manejan como arreglos de caracteres (char []) terminados
 * por el caracter nulo '\0'.
 * =================================================================================
 */

int main() {
    char texto1[50] = "Hola";
    char texto2[] = " Mundo";
    char texto3[50]; // Destino para copiar
    
    printf("==================================================\n");
    printf("EJEMPLOS DE <string.h>\n");
    printf("==================================================\n\n");

    // 1. strlen(): Obtener la longitud de una cadena (sin contar el nulo '\0')
    printf("1. Longitud (strlen):\n");
    printf("   La longitud de '%s' es: %lu caracteres.\n\n", texto1, strlen(texto1));

    // 2. strcpy(): Copiar una cadena en otra
    // IMPORTANTE: Asegurarse de que el destino tenga suficiente tamaño
    strcpy(texto3, texto1);
    printf("2. Copiar (strcpy):\n");
    printf("   El contenido copiado en texto3 es: '%s'\n\n", texto3);

    // 3. strcat(): Concatenar (unir) cadenas
    // Añade el contenido del segundo parametro al final del primero
    strcat(texto1, texto2);
    printf("3. Concatenar (strcat):\n");
    printf("   Al unir texto1 y texto2 queda: '%s'\n\n", texto1);

    // 4. strcmp(): Comparar dos cadenas
    // Devuelve 0 si son iguales, > 0 si la primera es mayor, < 0 si la segunda es mayor
    char pass1[] = "secreto";
    char pass2[] = "secreto";
    char pass3[] = "contrasena";

    printf("4. Comparacion (strcmp):\n");
    if (strcmp(pass1, pass2) == 0) {
        printf("   '%s' y '%s' son IGUALES.\n", pass1, pass2);
    }

    if (strcmp(pass1, pass3) != 0) {
        printf("   '%s' y '%s' son DIFERENTES.\n", pass1, pass3);
    }

    return 0;
}
