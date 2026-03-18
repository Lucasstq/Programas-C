#include <stdio.h>
#define SIZE 10

/*
    Algoritimo de ordenação booble sort
*/

int main(void)
{

    // Inicializa o array
    int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    // Variavel para guardar elemento especifico do array
    int array_element;

    // Imprime o array original
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    // For para contar quantas passadas temos que dar no array
    for (int i = 1; i < SIZE; i++)
    {
        // For para ordenar o array, SIZE - 1, arr[9] > arr[10] -> Não exite
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                array_element = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = array_element;
            }
        }
    }

    // Imprime array ordenado de forma crescente
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    return 0;
}