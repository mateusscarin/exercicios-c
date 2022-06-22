#include <stdio.h>

void main()
{
    int num1, num2, numInicio, numFinal;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("Digite um numero: \n");
        scanf("%d", &num1);

        printf("Digite outro numero: \n");
        scanf("%d", &num2);

        if(num1 < num2)
        {
            numInicio = num1;
            numFinal = num2;
        }
        else
        {
            numInicio = num2;
            numFinal = num1;
        }

        while(numInicio <= numFinal)
        {
            printf("%d \n", numInicio);
            numInicio++;
        }

        printf("Deseja continuar o intervalo de outros numeros? \n");
        printf("Tecle [S] para continuar ou [N] para terminar: ");
        scanf(" %c", &opcao);
        printf("\n");
    }
}
