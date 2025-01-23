#include <stdio.h>

int main(void)
{

    char abecedario[10] = {'L', 'A', 'W', 'D', 'R', 'B', 'M', 'X', 'N', 'E'};
    int i;
    int j;
    int temporal;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if(abecedario[j] > abecedario[j + 1]) 
            {
                temporal = abecedario[j + 1];
                abecedario[j + 1] = abecedario[j];
                abecedario[j] = temporal;
            }
        }
    }

    printf("\nLA LETRA MAS PROXIMA AL FINAL DEL ABECEDARIO ES: %c\n", abecedario[9]);
    
    return 0;
}
