#include <stdlib.h>
#include <stdio.h>
#include <time.h> // contém funções de tempo

// Status do jogo
enum Status
{
    CONTINUE,
    WIN,
    LOST
};

int roolDice(void)
{
    int die1; // dado1
    int die2; // dado2
    int sum;  // soma dos dados

    die1 = 1 + (rand() % 6); // gera número aleatorio de 1 a 6
    die2 = 1 + (rand() % 6); // gera número aleatorio de 1 a 6

    sum = die1 + die2; // soma dos pontos

    printf("Jogador lançou: %d + %d = %d\n", die1, die2, sum);
    return sum;
}

int main(void)
{
    enum Status gameStatus;
    int myPoints;
    int sumPoints;

    srand(time(NULL));

    sumPoints = roolDice();

    /*
        Switch para verificar os status da partida e pontos do jogador
    */
    switch (sumPoints)
    {
    case 7:
    case 11:
        gameStatus = WIN;
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;

    default:
        gameStatus = CONTINUE;
        myPoints = sumPoints;
        printf("O jogador deve continuar, tirou: %d\n", sumPoints);
        break;
    }

    /*
        Loop para o jogador continuar jogando
    */
    while (gameStatus == CONTINUE)
    {
        sumPoints = roolDice();

        // Jogador ganha se os pontos da primeira jogada forem iguais aos pontos das jogadas posteriores
        if (sumPoints == myPoints)
        {
            gameStatus = WIN;
        }
        else
        {
            // Jogador perde se tirar 7 nas proximas jogadas
            if (sumPoints == 7)
            {
                gameStatus = LOST;
            }
        }
    }

    // Verifica status da partida
    if (gameStatus == WIN)
    {
        printf("O jogador venceu\n");
    }
    else
    {
        printf("O jogador perdeu\n");
    }

    return 0; // Indica o fim do programa
}