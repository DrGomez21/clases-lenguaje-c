#include <stdio.h>

int main(void)
{
    
    // Definiendo nuestro array
    int miArray[6] = {2, 7, 8, 4, 22, 1};
    int i, j;
    int temporal;

    printf("Array desordenado: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ", miArray[i]);
    }

    // Necesitamos recorrer el array.
    for(i = 0; i < 6; i++) 
    {
        for(j = 0; j < 5; j++) 
        {
            if(miArray[j] > miArray[j + 1]) {
                temporal = miArray[j + 1];
                miArray[j + 1] = miArray[j];
                miArray[j] = temporal;
            }
        }
    }

    printf("\nArray ordenado: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ", miArray[i]);
    }
    

    return 0;
}
