#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <threads.h>

#define VETOR 10

pthread_t id1, id2, id3, id4, id5;

void *tabuada(void *t)
{
    for (int i = 0; i < 11; i++)
    {
        printf("5 x %d = %d\n", i, i * 5);
    }
    pthread_exit(NULL);
}

void *preencherVetor(void *t)
{
    int vetor[VETOR];
    for (int i = 0; i < 11; i++)
    {
        vetor[i] = rand() % 1001;
    }
    for (int i = VETOR; i > 0; i--)
    {
        printf("[%d] : %d\n", i, vetor[i]);
    }
    pthread_exit(NULL);
}

void *helloThread(void *t)
{
    printf("Eu sou a thread - %lu\n", thrd_current());
    pthread_exit(NULL);
}

void *fatorial(void *t)
{
    int fatorial = 1, num = 10;
    for (int i = 1; i != num; num--)
    {
        fatorial = fatorial * num;
    }
    printf("Fatorial = %d\n", fatorial);
    pthread_exit(NULL);
}

void *maiorValorVetor(void *t)
{
    int vetor[VETOR], maior = 0;
    for (int i = 0; i < 11; i++)
    {
        vetor[i] = rand() % 1001;
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
    }
    printf("Maior valor do vetor: %d\n", maior);
    pthread_exit(NULL);
}

int main(int argc, char *args[])
{
    pthread_create(&id1, NULL, (void *)tabuada, NULL);
    pthread_create(&id2, NULL, (void *)preencherVetor, NULL);
    pthread_create(&id2, NULL, (void *)helloThread, NULL);
    pthread_create(&id2, NULL, (void *)fatorial, NULL);
    pthread_create(&id2, NULL, (void *)maiorValorVetor, NULL);
    pthread_exit(NULL);
}
