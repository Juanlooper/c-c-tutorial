# Guia Practica de Programacion en C: PSeInt -> C

Bienvenido a este entorno de tutoria simplificado. Aqui aprenderas como traducir la logica estructurada que ya conoces de **PSeInt (pseudocodigo)** al lenguaje **C** y **C++**. 

El lenguaje C no es algo completamente nuevo; es simplemente una **representacion formal** de las mismas estructuras de control (condiciones, decisiones, casos) que ya manejas.

---

## 1.2 Reglas Generales del Lenguaje C

1. **Mayusculas vs Minusculas**: En C existe distincion entre mayusculas y minusculas (case-sensitive). Por ejemplo, `for`, `if`, `while`, `int` son palabras reservadas reconocidas por el compilador, pero `For`, `FOR`, `IF`, `Int` no lo son y causaran errores si se intentan usar como tales.
2. **Comentarios**: Se usan para documentar el codigo.
   * Comentarios de una sola linea: Usar `//` al inicio de la linea.
     ```c
     // Iniciamos el programa
     ```
   * Comentarios de varias lineas: Encerrar entre `/*` y `*/`.
     ```c
     /* esta seccion se encarga de calcular 
        e imprimir los datos en la impresora asignada */
     ```
3. **Punto y Coma ( ; )**: Cada sentencia o instruccion en C debe terminar con un punto y coma `;` (a excepcion de las directivas del procesador como `#include` y las cabeceras de funciones/estructuras de control).
4. **Llaves { }**: C es un lenguaje estructurado. Las llaves se utilizan para delimitar el inicio y el fin de un bloque de instrucciones (por ejemplo, dentro del `main` o en estructuras `if`, `for`, `while`).

---

## 1.3 Identificadores y Palabras Reservadas

* **Identificadores**: Nombres que el programador asigna a elementos como variables, funciones y arreglos.
  * Deben comenzar obligatoriamente con una letra o un guion bajo `_`.
  * Pueden contener letras, digitos y guiones bajos en cualquier combinacion despues del primer caracter.
  * No pueden tener espacios ni caracteres especiales (como acentos o `ñ`).
* **Palabras Reservadas**: Palabras con significado especial y predefinido en el lenguaje que no pueden utilizarse como nombres de variables o funciones. Algunos ejemplos son: `break`, `float`, `void`, `if`, `char`, `case`, `goto`, `while`, `int`, `switch`, `const`, `return`.

---

## 1.4 Tipos de Datos Basicos

Un tipo de dato define el rango de valores que una variable puede almacenar y el espacio de memoria que ocupara durante la ejecucion:

| Tipo de Dato | Espacio | Rango de Valores |
| :--- | :--- | :--- |
| `unsigned char` | 8 bits | 0 a 255 |
| `char` | 8 bits | -128 a 127 |
| `short int` | 16 bits | -32,768 a 32,767 |
| `unsigned int` | 32 bits | 0 a 4,294,967,295 |
| `int` | 32 bits | -2,147,483,648 a 2,147,483,647 |
| `unsigned long` | 32 bits | 0 a 4,294,967,295 |
| `enum` | 16 bits | -32,768 a 32,767 |
| `long` | 32 bits | -2,147,483,648 a 2,147,483,647 |
| `float` | 32 bits | 3.4 x 10^-38 a 3.4 x 10^+38 (6 decimales) |
| `double` | 64 bits | 1.7 x 10^-308 a 1.7 x 10^+308 (15 decimales) |
| `long double` | 80 bits | 3.4 x 10^-4932 a 1.1 x 10^+4932 |
| `void` | Sin valor | Vacio o sin tipo |

---

## 1.5 Constantes y Variables

* **Constantes**: Valores que se definen al inicio del programa y cuyo valor no puede ser alterado durante la ejecucion. Se declaran usando la palabra clave `const`:
  ```c
  const int limite = 100;
  ```
  Tipos de constantes comunes:
  * **Enteras**: Secuencia de digitos (0 a 9) sin decimales (ej. `0`, `1`, `743`, `32767`).
  * **Reales**: Numeros con punto decimal o exponente base 10 (ej. `0.0`, `1.2`, `827.602`, `2E-8`).
  * **De un solo caracter**: Un solo caracter encerrado entre comillas simples (ej. `'A'`, `'a'`, `'3'`, `'$'`).
  * **De cadena de caracteres**: Texto de cualquier longitud encerrado entre comillas dobles (ej. `"verde"`, `"$19.95"`, `"Chitre"`).
* **Variables**: Identificadores utilizados para representar datos cuyo valor puede cambiar a lo largo del programa. Su tipo de dato asociado no puede alterarse una vez declarada.
  ```c
  int a, b, c; // Declara tres variables enteras
  char d;      // Declara una variable de caracter
  ```

---

## 1.6 Librerias Comunes y E/S de Datos

Las librerias se declaran usando la directiva del preprocesador `#include` para permitir que el compilador tenga acceso a sus funciones:

| Libreria | Proposito / Uso principal |
| :--- | :--- |
| `stdio.h` | Tareas de entrada y salida estandar (printf, scanf, getchar, putchar, gets, puts) |
| `stdlib.h` | Conversion numerica, gestion de memoria, numeros aleatorios y control de procesos |
| `string.h` | Manipulacion de cadenas de caracteres (copiar, comparar, longitud) |
| `time.h` | Manipulacion y formateo de informacion sobre fechas y horas |
| `conio.h` | Creacion de interfaces basicas en consola (limpieza de pantalla, leer sin Enter con getch) |
| `math.h` | Funciones matematicas complejas (seno, coseno, potencia con pow, raiz cuadrada) |
| `iostream` | Entrada y salida por flujos en C++ (std::cin, std::cout) |

---

## Traduccion Mental Rapida (PSeInt -> C)

| Estructura en PSeInt | Estructura en C / C++ | Tipo de Estructura |
| :--- | :--- | :--- |
| `Si condicion Entonces` | `if (condicion) {` | Seleccion Simple / Doble |
| `Sino` | `} else {` | Alternativa Falsa |
| `Sino Si` | `} else if (condicion) {` | Seleccion Multiple |
| `Segun variable Hacer` | `switch (variable) {` | Seleccion por Casos |
| `De Otro Modo` | `default:` | Caso por defecto |

---

## Concepto Critico: `=` frente a `==`

Uno de los errores mas comunes al iniciar en C es confundir el operador de asignacion con el de comparacion:

* **Asignacion (`=`)**: Guarda un valor en una variable.
  ```c
  int x;
  x = 5; // Guarda el numero 5 dentro de x
  ```
* **Comparacion (`==`)**: Compara si dos valores son iguales y devuelve un resultado logico.
  ```c
  if (x == 5) {
      printf("x es igual a 5\n");
  }
  ```

> [!WARNING]
> **¿Por que es un error usar `=` en un `if`?**
> Si escribes `if (x = 5)`, no estas comparando; estas asignando el valor `5` a `x`. En C, cualquier resultado distinto de `0` se evalua como verdadero, por lo que la condicion se cumplira siempre, introduciendo un error logico dificil de detectar.

---

## Indice de Modulos Practicos

Abre cada carpeta para aprender con ejemplos reales comentados paso a paso:

1. **[01_if_simple/numero_positivo.c](file:///c:/Users/jrdri/Documents/projects/C/01_if_simple/numero_positivo.c)**:
   * Estructura `if` simple.
   * Entrada y salida con `printf` y `scanf` (uso de `%d` y `&`).
2. **[02_if_else/mayor_edad.c](file:///c:/Users/jrdri/Documents/projects/C/02_if_else/mayor_edad.c)** y **[02_if_else/par_impar.c](file:///c:/Users/jrdri/Documents/projects/C/02_if_else/par_impar.c)**:
   * Estructura `if-else` doble.
   * Operador modulo `%` (MOD) para paridad.
3. **[02_if_else/mayor_tres.c](file:///c:/Users/jrdri/Documents/projects/C/02_if_else/mayor_tres.c)** (Nuevo):
   * Estructura `if-else` doble anidada para encontrar el mayor de tres numeros.
4. **[03_if_else_if/clasificacion_nota.c](file:///c:/Users/jrdri/Documents/projects/C/03_if_else_if/clasificacion_nota.c)** y **[03_if_else_if/clasificacion_clima.c](file:///c:/Users/jrdri/Documents/projects/C/03_if_else_if/clasificacion_clima.c)**:
   * Estructura `if-else if-else` multiple.
   * Clasificacion por intervalos y lectura de decimales (`float` y `%f`).
5. **[03_if_else_if/compuesto_logico.c](file:///c:/Users/jrdri/Documents/projects/C/03_if_else_if/compuesto_logico.c)** (Nuevo):
   * Condiciones compuestas utilizando operadores logicos (`&&` / `||` / `!`).
6. **[04_switch/dia_semana.c](file:///c:/Users/jrdri/Documents/projects/C/04_switch/dia_semana.c)** y **[04_switch/mes_dias.c](file:///c:/Users/jrdri/Documents/projects/C/04_switch/mes_dias.c)**:
   * Estructura `switch` (Segun).
   * La importancia de usar `break` en cada caso y `default` (De Otro Modo).
7. **[05_iostream/ejemplo_iostream.cpp](file:///c:/Users/jrdri/Documents/projects/C/05_iostream/ejemplo_iostream.cpp)**:
   * Demostracion en **C++** de como usar `<iostream>` (`std::cout` y `std::cin`) para comparar con C.
8. **[06_io_sin_formato/ejemplo_sin_formato.c](file:///c:/Users/jrdri/Documents/projects/C/06_io_sin_formato/ejemplo_sin_formato.c)** (Nuevo):
   * Captura y visualizacion de caracteres y cadenas sin formato (`getchar`, `getche`, `getch`, `putchar`, `putch`, `gets`, `puts`).
9. **[07_operadores/operadores_y_sizeof.c](file:///c:/Users/jrdri/Documents/projects/C/07_operadores/operadores_y_sizeof.c)** (Nuevo):
   * Uso del operador `sizeof()`, incrementos/decrementos monarios (`++` / `--`), y operadores de asignacion compuesta (`+=`, etc.).
10. **[08_bucles/bucle_while.c](file:///c:/Users/jrdri/Documents/projects/C/08_bucles/bucle_while.c)** (Nuevo):
    * Estructura repetitiva `while` interactiva.
11. **[08_bucles/bucle_for.c](file:///c:/Users/jrdri/Documents/projects/C/08_bucles/bucle_for.c)** (Nuevo):
    * Estructura repetitiva `for` e interrupcion inmediata de ciclos con `break`.

---

## Compilacion y Ejecucion en este Entorno

Puedes compilar y ejecutar cada ejercicio utilizando la tarea de compilacion de VS Code o desde la terminal:

### Metodo 1: Con Atajos de VS Code (Recomendado)
1. Abre el archivo `.c` o `.cpp` que deseas ejecutar.
2. Presiona **`Ctrl+Shift+B`** en tu teclado.
3. Selecciona la tarea de compilacion adecuada (ej. **Compilar Archivo C Activo (GCC)** o **Compilar Archivo C++ Activo (G++)**).
4. Abre la terminal de VS Code y ejecuta el binario generado:
   * Escribe la ruta del archivo executable generado (ej. `.\01_if_simple\numero_positivo.exe`).

### Metodo 2: Manual desde PowerShell
```powershell
# Compilar archivo C
gcc 01_if_simple/numero_positivo.c -o 01_if_simple/numero_positivo.exe

# Ejecutar
.\01_if_simple\numero_positivo.exe
```
