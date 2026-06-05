/**
 * =================================================================================
 * MODULO 5: Comparativa de Entrada/Salida en C++ (<iostream>)
 * =================================================================================
 * En este archivo opcional veras cómo implementar la lógica de los módulos 
 * anteriores usando la sintaxis de C++ con flujos (Streams).
 * 
 * DIFERENCIAS CLAVE:
 *  1. C++ usa la biblioteca <iostream> en lugar de <stdio.h>.
 *  2. No usamos printf; usamos cout con el operador de inserción '<<'.
 *  3. No usamos scanf; usamos cin con el operador de extracción '>>'.
 *  4. No es necesario colocar '&' al leer datos con cin (se maneja por referencia).
 *  5. endl representa un salto de línea (como \n) y vacía el buffer.
 *  6. Usamos 'using namespace std;' para no tener que escribir 'std::' en cada linea.
 * =================================================================================
 */

#include <iostream> // Biblioteca estándar de C++ para entrada/salida de flujos
#include <string>   // Para utilizar strings
#include <iomanip>  // Para manipular el formato de salida

using namespace std;

int main() {
    // -----------------------------------------------------------------------------
    // Comparación: Ejemplo MayorEdad en C++
    // -----------------------------------------------------------------------------
    int edad;

    // cout envía texto hacia la consola
    cout << "==================================================" << endl;
    cout << "COMPARATIVA EN C++ (USANDO <iostream>)" << endl;
    cout << "==================================================" << endl << endl;

    cout << "Ingrese su edad: ";
    
    // cin lee la entrada de la consola y la almacena en 'edad' automáticamente
    cin >> edad;

    if (edad >= 18) {
        cout << "Es mayor de edad" << endl;
    } else {
        cout << "Es menor de edad" << endl;
    }

    // -----------------------------------------------------------------------------
    // Comparación: Ejemplo DiaSemana en C++
    // -----------------------------------------------------------------------------
    int dia;
    cout << "\nIngrese un numero del 1 al 7: ";
    cin >> dia;

    // La estructura switch funciona exactamente igual en C y C++
    switch (dia) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default:
            cout << "Numero invalido" << endl;
    }

    // -----------------------------------------------------------------------------
    // Mas ejemplos de <iostream>
    // -----------------------------------------------------------------------------
    cout << "\n==================================================" << endl;
    cout << "MAS EJEMPLOS DE C++ (iostream, string, iomanip)" << endl;
    cout << "==================================================" << endl;

    // Ejemplo 1: Leer una linea completa con espacios usando getline
    cin.ignore(); // Limpiamos el salto de linea ('\n') sobrante en el buffer del cin anterior
    string nombreCompleto;
    
    cout << "Ingrese su nombre completo: ";
    getline(cin, nombreCompleto);
    cout << "Hola, " << nombreCompleto << "! Bienvenido." << endl;

    // Ejemplo 2: Concatenar multiples valores en una sola linea
    int anio = 2024;
    double temperatura = 25.4;
    
    cout << "\nVariables concatenadas: " << endl;
    cout << "El anio es " << anio << " y hace " << temperatura << " grados." << endl;

    // Ejemplo 3: Formatear salida numerica (decimales)
    double pi = 3.14159265;
    cout << "\nMostrando PI con diferentes precisiones:" << endl;
    cout << "Normal   : " << pi << endl;
    cout << fixed << setprecision(2);
    cout << "2 decimal: " << pi << endl;
    cout << setprecision(4);
    cout << "4 decimal: " << pi << endl;

    return 0;
}
