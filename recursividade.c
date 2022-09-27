#include <stdio.h>

unsigned long calcularFatorial(int num);
unsigned long calcularFatorialRecursividade(int num);

int main()
{
    int num;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    printf("Fatorial: %ld\n", calcularFatorial(num));
    printf("Fatorial recursividade: %ld\n", calcularFatorialRecursividade(num));
    return 0;
}

unsigned long calcularFatorial(int num)
{
    int i;
    long fatorial = 1;
    for (i = num; i >= 1; i--)
    {
        fatorial *= i;
    }
    return fatorial;
}

unsigned long calcularFatorialRecursividade(int num)
{
    if (num == 0)
    return 1;
    
    else
    return num*calcularFatorial(num-1);
}
