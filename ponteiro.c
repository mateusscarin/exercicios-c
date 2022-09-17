#include <stdio.h>

int preencher(int *, int *);

int main()
{
    int num1, num2;
    printf("Informe 2 numeros:\n");
    scanf("%d %d", &num1, &num2);
    preencher(&num1, &num2);
    printf("Invertendo: num1: %d - num2: %d", num1, num2);
    return 0;
}

int preencher(int *num1, int *num2)
{
    *num1 = *num2 + *num1;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
    return 0;
}


