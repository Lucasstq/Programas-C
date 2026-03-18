#include <stdio.h>
#define SIZE 6

// Passagem por refêrencia
void modifyArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}

// Passagem por valor
void modifyElement(int element)
{
    printf("Elemento temporariamente modificado: %d\n", element *= 2);
}

int main(void)
{
    int array1[SIZE] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < SIZE; i++)
    {
        printf("Elemento do array1[ %d ]: %d\n", i, array1[i]);
    }

    printf("\nArray modificado\n");

    // Modifica os elementos originais do array, passagem seu endereço de memória, cujo é o seu própio nome
    modifyArray(array1, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        printf("Elemento do array1[ %d ]: %d\n", i, array1[i]);
    }

    // Passagem por valor, não altera o elemento do array original
    modifyElement(array1[2]); 

    printf("\nElemento da posição 2 do array modificado: %d\n", array1[2]); 

    return 0;
}