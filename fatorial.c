#include <stdio.h>

int main()
{
    unsigned int num, fatorial = 1;

    printf("Informe um numero: \n");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("Fatorial = 1");
    }
    else
    {
        for (int i = 1; i != num; num--)
        {
            fatorial = fatorial * num;
        }
        printf("Fatorial = %d", fatorial);
    }
}