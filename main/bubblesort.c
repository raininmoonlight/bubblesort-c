#include <stdio.h>

int main() {

    int numbers[] = {2, 5, 6, 7, 8};
    // Calcula o tamanho do array (total de bytes dividido pelo tamanho de um elemento)
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Laço externo para controlar as "passadas"
    for(int i = 0; i < length - 1; i++) 
    {
        // Laço interno para comparar pares de números adjacentes
        for(int j = 0; j < length - i - 1; j++ )
        {
            // Verifica se o número atual é maior que o próximo
            if(numbers[j] > numbers[j+1]) 
            {
                // Troca os números de lugar
                int troca = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = troca;
            }
        }
    }

    printf("Array ordenado: \n");
    for(int i = 0; i < length; i++)
    {
        printf("%d,", numbers[i]); 
    }

    return 0;
}
