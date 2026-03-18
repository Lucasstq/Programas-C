#include <stdio.h>

int inverseNumber(int number)
{
    int inverse = 0;
    while (number != 0)
    {
        inverse = inverse * 10 + number % 10;
        number /= 10;
    }
    return inverse;
}

int main(void)
{
    int digitNumber;

    printf("Digite um número: ");
    scanf("%d", &digitNumber);

    printf("Número invertido: %d\n", inverseNumber(digitNumber));

    return 0;
}