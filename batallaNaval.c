/**
 * JUEGO DE BATALLA NAVAL
 * EL JUEGO CONSISTE EN HUNDIR EL BARCO ENEMIGO.
 * EL BARCO SE REPRESENTARÁ CON LA LETRA 'B'.
 * El tablero será una matriz cuadrada de 5x5.
 * Las reglas son las siguientes:
 *  - Se tienen 3 barcos en el tablero.
 *  - Se tienen 5 intentos para derribar los 3 barcos.
 *  - Se mostrará la puntuación.
 *  - Para ganar se deben derribar los 3 barcos.
 *  - Al final de la partida se deberá mostrar el tablero con la ubicación de los barcos
 *      y de los misiles lanzados.
 */

#include <stdio.h>

int main(void)
{

    // Definir una matriz.
    char tablero[5][5] = {
        {'*', '*', '*', '*', '*'},
        {'*', '*', '*', 'B', '*'},
        {'*', 'B', '*', '*', '*'},
        {'*', '*', '*', '*', '*'},
        {'*', 'B', '*', '*', '*'},
    };
    int fila, columna;
    int i, j;
    int aciertos = 0;

    // Hacer que el usuario introduzca las coordenadas donde quiere lanzar el misil.
    // Recordar que tiene 5 turnos.
    for (i = 0; i < 5; i++)
    {
        printf("Este es tu turno %d de 5\n", i + 1);
        printf("----------------------\n");
        printf("Ingrese la fila: ");
        scanf("%d", &fila);
        printf("Ingrese la columna: ");
        scanf("%d", &columna);

        if (tablero[fila][columna] == 'B')
        {
            printf("Acertaste un barco rival\n");
            aciertos++;
        } else {
            printf("El barco no esta ahi\n");
        }

        tablero[fila][columna] = 'X';

        printf("----------------------\n");
    }

    // Ahora mostraremos el tablero final.
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf(" %c ", tablero[i][j]);
        }
        printf("\n");
    }

    if (aciertos == 3)
    {
        printf("Felicidades. Ganaste el juego :3 \n");
    } else {
        printf("Buena suerte la proxima :) \n");
    }

    printf("\nTuviste %d aciertos\n", aciertos);

    printf("-----------------\n");
    printf("\nEste juego fue desarrollado por Meliza\n");
    printf("-----------------\n");

    return 0;
}