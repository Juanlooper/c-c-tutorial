/**
 * =================================================================================
 * MODULO 7: Operadores Monarios, sizeof y Asignacion Compuesta
 * =================================================================================
 * En este modulo exploraremos operadores avanzados de C:
 * 1. sizeof(): Retorna el tamaño en bytes que ocupa un tipo de dato o variable.
 * 2. Incrementos/Decrementos (++, --): Aumentan o disminuyen el valor en 1.
 * 3. Asignacion compuesta (+=, -=, *=, /=, %=): Operaciones aritmeticas abreviadas.
 * =================================================================================
 */

#include <stdio.h>

int main() {
    // -----------------------------------------------------------------------------
    // 1. Operador sizeof()
    // -----------------------------------------------------------------------------
    // sizeof determina el espacio reservado por cada tipo de dato en la plataforma actual
    printf("1. TAMANOS DE TIPOS DE DATOS (en bytes):\n");
    printf("Tamaño de char: %d bytes\n", (int)sizeof(char));
    printf("Tamaño de int: %d bytes\n", (int)sizeof(int));
    printf("Tamaño de short int: %d bytes\n", (int)sizeof(short int));
    printf("Tamaño de float: %d bytes\n", (int)sizeof(float));
    printf("Tamaño de double: %d bytes\n", (int)sizeof(double));
    printf("\n");

    // -----------------------------------------------------------------------------
    // 2. Operadores Monarios (Incremento y Decremento)
    // -----------------------------------------------------------------------------
    int x = 5;
    printf("2. OPERADORES MONARIOS:\n");
    printf("Valor inicial de x: %d\n", x);

    x++; // Incrementa x en 1 (equivalente a x = x + 1)
    printf("Despues de x++: %d\n", x);

    x--; // Decrementa x en 1 (equivalente a x = x - 1)
    printf("Despues de x--: %d\n", x);
    printf("\n");

    // Diferencia teorica entre Post-incremento (x++) y Pre-incremento (++x):
    int y;
    x = 5;
    y = x++; // y toma el valor original de x (5), luego x incrementa a 6
    printf("Post-incremento (y = x++):\n");
    printf("y = %d, x = %d\n", y, x);

    x = 5;
    y = ++x; // x incrementa a 6 primero, luego y toma su nuevo valor (6)
    printf("Pre-incremento (y = ++x):\n");
    printf("y = %d, x = %d\n", y, x);
    printf("\n");

    // -----------------------------------------------------------------------------
    // 3. Operadores de Asignacion Compuesta
    // -----------------------------------------------------------------------------
    int a = 10;
    int b = 3;
    printf("3. ASIGNACION COMPUESTA:\n");
    printf("Valores iniciales: a = %d, b = %d\n", a, b);

    a += b; // Equivalente a: a = a + b
    printf("a += b (Suma b a 'a'): a = %d\n", a);

    a -= 2; // Equivalente a: a = a - 2
    printf("a -= 2 (Resta 2 a 'a'): a = %d\n", a);

    a *= b; // Equivalente a: a = a * b
    printf("a *= b (Multiplica 'a' por b): a = %d\n", a);

    a /= 2; // Equivalente a: a = a / 2
    printf("a /= 2 (Divide 'a' entre 2): a = %d\n", a);

    a %= b; // Equivalente a: a = a % b (Residuo de division entera)
    printf("a %%= b (Residuo de divide 'a' entre b): a = %d\n", a);

    return 0;
}
