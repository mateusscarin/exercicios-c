#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VOTOS 50

int main()
{

    int votosVet[VOTOS], candidatosVet[5] = {0, 0, 0, 0, 0}, i, vencedor, maior;
    srand(time(NULL));

    for (i = 0; i < VOTOS; i++)
    {
        votosVet[i] = rand() % 5 + 5;
        printf("[%d] = %d\n", i, votosVet[i]);
    }

    for (i = 0; i < VOTOS; i++)
    {
        candidatosVet[votosVet[i] - 5]++;
    }

    maior = candidatosVet[0];
    for (i = 0; i < 5; i++)
    {
        printf("[%d] : = %d votos\n", i, candidatosVet[i]);
        if (candidatosVet[i] > maior)
        {
            maior = candidatosVet[i];
            vencedor = i;
        }
    }
    printf("Vencedor e o candidato: %d\n", vencedor);
}