#include <stdio.h>

/**
 * Ejercicio:
 * En la matriz se muestran las calificaciones de los
 * alumnos en la materia informática. Determinar el promedio
 * de calificaciones que se tuvo en la asignatura.
 * Se considerará un buen profesor si el promedio es mayor a 3.8
 * en caso de que no se cumpla será despedido el profesor.
 * Indicar esto en el programa.
 */

// Definir una constante
#define CANTIDAD 12

int main(void)
{

    // Definir una matriz
    int calificaciones[4][3] = {
        {3, 4, 5},
        {5, 3, 3},
        {4, 2, 2},
        {3, 5, 5},
    };
    int i, j;
    int suma = 0;
    float promedio;

    for (i = 0; i < 4; i++)                     // Maneja las filas
    {                                           // i = 0; i = 1
        for (j = 0; j < 3; j++)                 // Maneja las columnas
        {                                       // j = 0, j = 1, j = 2
            suma = suma + calificaciones[i][j]; // Sumamos todas las calificaciones.
        }
    }

    promedio = suma / CANTIDAD;

    if (promedio > 3.8)
    {
        printf("El profesor NO será despedido YEEEEEEY :)\n");
        printf("El promedio fue: %.2f\n", promedio);
    }
    else
    {
        printf("El profesor será DESPEDIDO CHAN CHAN CHAAAAAAN :(\n");
        printf("El promedio fue: %.2f\n", promedio);
    }

    return 0; // El programa termino sin errores.
}