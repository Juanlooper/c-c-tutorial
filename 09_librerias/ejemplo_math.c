#include <stdio.h>
#include <math.h>

/**
 * =================================================================================
 * MODULO 9: Libreria <math.h>
 * =================================================================================
 * Este ejemplo demuestra el uso de las funciones matematicas mas comunes
 * disponibles en la libreria estandar de C <math.h>.
 * 
 * NOTA DE COMPILACION (Linux/Mac):
 * Al usar gcc, es necesario enlazar la libreria matematica añadiendo -lm al final
 * Ejemplo: gcc ejemplo_math.c -o ejemplo_math -lm
 * En Windows (MinGW), usualmente no es necesario, pero es buena practica saberlo.
 * =================================================================================
 */

int main() {
    double base = 2.0;
    double exponente = 3.0;
    double numero_raiz = 25.0;
    double numero_decimal = 4.7;

    printf("==================================================\n");
    printf("EJEMPLOS DE <math.h>\n");
    printf("==================================================\n\n");

    // 1. pow(): Calcula la potencia (base elevado al exponente)
    double resultado_potencia = pow(base, exponente);
    printf("1. Potencia (pow):\n");
    printf("   %.2f elevado a %.2f es igual a %.2f\n\n", base, exponente, resultado_potencia);

    // 2. sqrt(): Calcula la raiz cuadrada
    double resultado_raiz = sqrt(numero_raiz);
    printf("2. Raiz Cuadrada (sqrt):\n");
    printf("   La raiz cuadrada de %.2f es %.2f\n\n", numero_raiz, resultado_raiz);

    // 3. ceil() y floor(): Redondeo
    // ceil: redondea hacia arriba
    // floor: redondea hacia abajo
    printf("3. Redondeo (ceil y floor):\n");
    printf("   Numero original: %.2f\n", numero_decimal);
    printf("   Redondeo hacia arriba (ceil) : %.2f\n", ceil(numero_decimal));
    printf("   Redondeo hacia abajo (floor) : %.2f\n\n", floor(numero_decimal));

    // 4. Funciones trigonometricas (sin, cos, tan)
    // Trabajan en radianes, asi que convertimos grados a radianes
    double grados = 90.0;
    double radianes = grados * (3.14159265 / 180.0);
    printf("4. Trigonometria (sin, cos):\n");
    printf("   Seno de %.2f grados es %.4f\n", grados, sin(radianes));
    printf("   Coseno de %.2f grados es %.4f\n\n", grados, cos(radianes));

    return 0;
}
