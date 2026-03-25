#include <stdio.h>
#define SIZE 15

// função para fazer busca binaria em um array ordenado
int binary_search(const int a[], int key, int low, int high)
{
    // váriavel para armazenar elemento central do array
    int middle;

    // loop para encontrar elemento
    while (low <= high)
    {
        middle = (low + high) / 2;

        if (key == a[middle])
        {
            return middle;
        }
        else if (key < a[middle])
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }

    return -1;
}

int main(void)
{
    int key, found;
    int arr[SIZE];

    // for para armazenar elementos no array
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i * 2;
    }

    printf("Digite um número para buscar no array: ");
    scanf("%d", &key);

    found = binary_search(arr, key, 0, SIZE - 1);

    if (found != -1)
    {
        printf("Número %d encontrado no índice %d\n", key, found);
    }
    else
    {
        perror("Número não encontrado\n");
    }

    return 0;
}
