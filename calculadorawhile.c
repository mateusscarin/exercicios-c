#include <stdio.h>
#include <stdlib.h>

void main()
{

    char tipo = 's';
    int val;
    float total;

    while (tipo != 'f')
    {
        printf("Informe a operacao: \n s - Soma \n t - Subtracao \n m - Multiplicacao \n d - Divisao \n f - Finalizar \n");
        scanf(" %c", &tipo);

        if (tipo == 'f')
        {
            break;
        }
        else if (tipo == 's' || tipo == 't' || tipo == 'm' || tipo == 'd')
        {
            printf("Informe o valor: \n");
            scanf("%f", &total);

            if (tipo == 's')
            {
                printf("Informe o valor a ser somado: \n");
                scanf("%d", &val);
                total = total + val;
            }

            else if (tipo == 't')
            {
                printf("Informe o valor a ser subtraido: \n");
                scanf("%d", &val);
                total = total - val;
            }

            else if (tipo == 'm')
            {
                printf("Informe o valor a ser multiplicado: \n");
                scanf("%d", &val);
                total = total * val;
            }

            else if (tipo == 'd')
            {
                printf("Informe o valor a ser dividido: \n");
                scanf("%d", &val);
                total = total / val;
            }
            printf("Resultado: %.1f\n", total);
        }
        else
        {
            printf("Opcao Invalida!\n");
        }
    }

    printf("\nO programa terminou! \n");
}
