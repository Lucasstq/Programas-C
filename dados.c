#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE_ARR 7

// Programa para jogar um dado e contar o número de frequencia em que as faces do dado aparecem
int main(void)
{

    // Inicializa o meu array com todos os elementos sendo 0
    int rolls[SIZE_ARR] = {0};
    // Representa as faces do meu dado
    int face;

    // seed para números aleatórios, usando hora atual
    srand(time(NULL));

    // Rola o dado 6000 vezes
    for (int i = 1; i <= 6000; i++)
    {
        // Gera um número aleatório de um a seis
        face = 1 + (rand() % 6);
        rolls[face]++;
    }

    printf("%s%17s\n", "Face", "Frequência");

    // Percorre o meu array para mostrar os dados
    for (int i = 1; i < SIZE_ARR; i++)
    {
        printf("%4d%17d\n", i, rolls[i]);
    }

    return 0;
}