# Guia Practica de Programacion en C: PSeInt -> C

Bienvenido a este entorno de tutoria simplificado. Aqui aprenderas como traducir la logica estructurada que ya conoces de **PSeInt (pseudocodigo)** al lenguaje **C** y **C++**. 

El lenguaje C no es algo completamente nuevo; es simplemente una **representacion formal** de las mismas estructuras de control (condiciones, decisiones, casos) que ya manejas.

---

## Traduccion Mental Rapida

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
* **Comparacion (`==`)**: Compara si dos valores son iguales y devuelve un resultado logico (verdadero o falso).
  ```c
  if (x == 5) {
      printf("x es igual a 5\n");
  }
  ```

> [!WARNING]
> **¿Por que es un error usar `=` en un `if`?**
> Si escribes `if (x = 5)`, no estas comparando; estas asignando el valor `5` a `x`. En C, cualquier resultado distinto de `0` se evalua como **verdadero**, por lo que la condicion del `if` siempre se cumplira, introduciendo un error de logica silencioso.

---

## Indice de Modulos Practicos

Abre cada carpeta para aprender con ejemplos reales comentados paso a paso:

1. **[`01_if_simple/numero_positivo.c`](file:///c:/Users/jrdri/Documents/projects/C/01_if_simple/numero_positivo.c)**:
   * Estructura `if` simple.
   * Entrada y salida con `printf` y `scanf` (uso de `%d` y `&`).
   * Ejercicios para completar.
2. **[`02_if_else/mayor_edad.c`](file:///c:/Users/jrdri/Documents/projects/C/02_if_else/mayor_edad.c)** y **[`02_if_else/par_impar.c`](file:///c:/Users/jrdri/Documents/projects/C/02_if_else/par_impar.c)**:
   * Estructura `if-else` doble.
   * Uso del operador modulo (`%` en C, equivalente a `MOD` en PSeInt) para paridad.
3. **[`03_if_else_if/clasificacion_nota.c`](file:///c:/Users/jrdri/Documents/projects/C/03_if_else_if/clasificacion_nota.c)** y **[`03_if_else_if/clasificacion_clima.c`](file:///c:/Users/jrdri/Documents/projects/C/03_if_else_if/clasificacion_clima.c)**:
   * Estructura `if-else if-else` multiple.
   * Lectura de numeros decimales (`float` y `%f`).
   * Clasificacion por intervalos de valores.
4. **[`04_switch/dia_semana.c`](file:///c:/Users/jrdri/Documents/projects/C/04_switch/dia_semana.c)** y **[`04_switch/mes_dias.c`](file:///c:/Users/jrdri/Documents/projects/C/04_switch/mes_dias.c)**:
   * Estructura `switch` (equivalente a `Segun`).
   * La importancia de usar `break` en cada caso y `default` (De Otro Modo).
5. **[`05_iostream/ejemplo_iostream.cpp`](file:///c:/Users/jrdri/Documents/projects/C/05_iostream/ejemplo_iostream.cpp)**:
   * Demostracion en **C++** de como usar `<iostream>` (`std::cout` y `std::cin`) para que compares la diferencia sintactica con C.

---

## Compilacion y Ejecucion en este Entorno

Puedes compilar y ejecutar facilmente cada ejercicio utilizando la tarea de compilacion de VS Code o desde la terminal:

### Metodo 1: Con Atajos de VS Code (Recomendado)
1. Abre el archivo `.c` o `.cpp` que deseas ejecutar.
2. Presiona **`Ctrl+Shift+B`** en tu teclado.
3. Selecciona la tarea de compilacion adecuada (ej. **Compilar Archivo C Activo (GCC)** o **Compilar Archivo C++ Activo (G++)**).
4. Abre la terminal de VS Code y ejecuta el binario generado:
   * Para C: `.\01_if_simple\numero_positivo.exe`
   * Para C++: `.\05_iostream\ejemplo_iostream.exe`

### Metodo 2: Manual desde PowerShell
```powershell
# Compilar archivo C
gcc 01_if_simple/numero_positivo.c -o 01_if_simple/numero_positivo.exe

# Ejecutar
.\01_if_simple\numero_positivo.exe
```
