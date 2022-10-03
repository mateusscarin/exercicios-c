#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
    int vetorA[N], vetorB[N];
    int i = 0;

    for (; i < N; i++)
    {
        vetorA[i] = rand() % 31;
        vetorB[N - 1 - i] = vetorA[i];
    }
    /*Mostrando no console
    
    for (i = 0; i < N; i++)
    {
        printf("A[%d] : %d - B[%d] : %d\n", i, vetorA[i], i, vetorB[i]);
    }*/
    return 0;
}
