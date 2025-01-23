#include <stdio.h>

int main(void)
{

    // El usuario debe cargar los elementos del arreglo.
    // PASO1. Definir el array.
    int laTabla[6] = {0, 0, 0, 0, 0, 0};
    int i;
    int cantidadMayusculas = 0;
    int cantidadMinusculas = 0;
    int cantidadNumeros = 0;

    // PASO 2. El usuario debe ingresar los elementos.
    for (i = 0; i < 6; i++)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &laTabla[i]); // entero
    }

    for (i = 0; i < 6; i++)
    {
        if (laTabla[i] >= 65 && laTabla[i] <= 90)
        {
            printf("Es una letra MAYUSCULA %c\n", laTabla[i]);
        }
        else if (laTabla[i] >= 97 && laTabla[i] <= 122)
        {
            printf("Es una letra minuscula %c\n", laTabla[i]);
        }
        else
        {
            printf("Es un numero %d\n", laTabla[i]);
        }
    }

    // cantidad de mayusculas, minusculas y numeros.
    for (i = 0; i < 6; i++)
    {
        if (laTabla[i] >= 65 && laTabla[i] <= 90)
        {
            cantidadMayusculas++;
        }
        else if (laTabla[i] >= 97 && laTabla[i] <= 122)
        {
            cantidadMinusculas++;
        }
        else
        {
            cantidadNumeros++;
        }
    }

    printf("\n********************\n");

    printf("Hay %d letras MAYUSCULAS\n", cantidadMayusculas);
    printf("Hay %d letras minusculas\n", cantidadMinusculas);
    printf("Hay %d numeros\n", cantidadNumeros);

    return 0;
}
