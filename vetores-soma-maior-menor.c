#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i = 0, maior, menor, soma = 0;

    for (; i < 5; i++)
    {
        vetor[i] = rand() % 11;
        printf("[%d] : %d\n", i, vetor[i]);
        if (i == 0)
            maior = menor = vetor[i];
        if (maior < vetor[i])
            maior = vetor[i];
        if (menor > vetor[i])
            menor = vetor[i];
        soma += vetor[i];
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Soma total: %d\n", soma);

    return 0;
}
