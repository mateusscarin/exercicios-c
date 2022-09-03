#include <stdio.h>

int somar(int n1, int n2);
int subtrair(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(int n1, int n2);

int main()
{
    int num1, num2;

    printf("Informe 2 numeros:\n");
    scanf("%d\n", &num1);
    scanf("%d", &num2);

    printf("Soma: %d\n", somar(num1, num2));
    printf("Subtracao: %d\n", subtrair(num1, num2));
    printf("Multiplicacao: %d\n", multiplicar(num1, num2));
    printf("Divisao: %f\n", dividir(num1, num2));
}

int somar(int num1, int num2)
{
    return num1 + num2;
}

int subtrair(int num1, int num2)
{
    return num1 - num2;
}

int multiplicar(int num1, int num2)
{
    return num1 * num2;
}

float dividir(int num1, int num2)
{
    return num1 / num2;
}
