/**
 * =================================================================================
 * MODULO 5: Comparativa de Entrada/Salida en C++ (<iostream>)
 * =================================================================================
 * En este archivo opcional veras cómo implementar la lógica de los módulos 
 * anteriores usando la sintaxis de C++ con flujos (Streams).
 * 
 * DIFERENCIAS CLAVE:
 *  1. C++ usa la biblioteca <iostream> en lugar de <stdio.h>.
 *  2. No usamos printf; usamos std::cout con el operador de inserción '<<'.
 *  3. No usamos scanf; usamos std::cin con el operador de extracción '>>'.
 *  4. No es necesario colocar '&' al leer datos con std::cin (se maneja por referencia).
 *  5. std::endl representa un salto de línea (como \n) y vacía el buffer.
 * =================================================================================
 */

#include <iostream> // Biblioteca estándar de C++ para entrada/salida de flujos

int main() {
    // -----------------------------------------------------------------------------
    // Comparación: Ejemplo MayorEdad en C++
    // -----------------------------------------------------------------------------
    int edad;

    // std::cout envía texto hacia la consola
    std::cout << "==================================================" << std::endl;
    std::cout << "COMPARATIVA EN C++ (USANDO <iostream>)" << std::endl;
    std::cout << "==================================================" << std::endl << std::endl;

    std::cout << "Ingrese su edad: ";
    
    // std::cin lee la entrada de la consola y la almacena en 'edad' automáticamente
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Es mayor de edad" << std::endl;
    } else {
        std::cout << "Es menor de edad" << std::endl;
    }

    // -----------------------------------------------------------------------------
    // Comparación: Ejemplo DiaSemana en C++
    // -----------------------------------------------------------------------------
    int dia;
    std::cout << "\nIngrese un numero del 1 al 7: ";
    std::cin >> dia;

    // La estructura switch funciona exactamente igual en C y C++
    switch (dia) {
        case 1: std::cout << "Lunes" << std::endl; break;
        case 2: std::cout << "Martes" << std::endl; break;
        case 3: std::cout << "Miercoles" << std::endl; break;
        case 4: std::cout << "Jueves" << std::endl; break;
        case 5: std::cout << "Viernes" << std::endl; break;
        case 6: std::cout << "Sabado" << std::endl; break;
        case 7: std::cout << "Domingo" << std::endl; break;
        default:
            std::cout << "Numero invalido" << std::endl;
    }

    return 0;
}
