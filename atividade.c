#include <stdio.h>
#include <stdbool.h>
#define N 5

/**
 *
 * @author Mateus Scarin
 */


struct TipoNodo
{
    int codigo;
    char nome[10];
    float salario;
};

typedef struct TipoNodo TipoNodo;
int menu();
int inserirInicio(TipoNodo LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo);
int inserirFim(TipoNodo LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo);
int removerNodo(TipoNodo LL[], int IA, int FA, int *IL, int *FL, int K, TipoNodo infoNodo);
void ordenar(TipoNodo LL[]);
int acessarNodo(TipoNodo LL[], int *IL, int *FL, TipoNodo valBuscado);
int mostrar(TipoNodo LL[], int IA, int FA, int IL, int FL);

int main()
{
    TipoNodo LL[N], infoNodo, valBuscado;
    int IA = 0, FA = N - 1, IL = -1, FL = -1, op, K = -1;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            printf("Codigo.: ");
            scanf("%d", &infoNodo.codigo);
            printf("Nome...: ");
            scanf("%s", infoNodo.nome);
            printf("Salario: ");
            scanf("%f", &infoNodo.salario);
            if (inserirInicio(LL, IA, FA, &IL, &FL, infoNodo) == 0)
                printf("Sucesso!\n");
            else
                printf("Problemas ao inserir no início!\n");
            break;
        case 2:
            printf("Codigo.: ");
            scanf("%d", &infoNodo.codigo);
            printf("Nome...: ");
            scanf("%s", infoNodo.nome);
            printf("Salario: ");
            scanf("%f", &infoNodo.salario);
            if (inserirFim(LL, IA, FA, &IL, &FL, infoNodo) == 0)
                printf("Sucesso!\n");
            else
                printf("Problemas ao inserir no fim!\n");
            break;
        case 3:
            printf("Informe o nodo a ser removido: ");
            scanf("%d", &K);
            if (removerNodo(LL, IA, FA, &IL, &FL, K, infoNodo) == 0)
                printf("Sucesso!\n");
            else
                printf("Problemas ao remover nodo!\n");
            break;
        case 4:
            printf("Informe o valor a ser buscado: ");
            scanf("%d", &valBuscado.codigo);
            int posicao = acessarNodo(LL, &IL, &FL, valBuscado);
            if (posicao == 0)
            {
                printf("Posicao nao encontrada!\n");
            }
            else
                printf("Posicao: %d\n", posicao);
            break;
        case 5:
            mostrar(LL, IA, FA, IL, FL);
            break;
        case 0:
            printf("Ate mais tarde!\n");
            break;
        default:
            printf("Opção invalida!!!\n");
            break;
        }

    } while (op != 0);
}

int menu()
{
    int op;
    printf("@@@@@@@@@@ M E N U @@@@@@@@@@@\n");
    printf("[1] Inserir no Inicio\n");
    printf("[2] Inserir no Fim\n");
    printf("[3] Remover nodo\n");
    printf("[4] Buscar nodo\n");
    printf("[5] Mostrar o arranjo\n");
    printf("[0] Sair\n");
    printf("Escolha a opcao: ");
    scanf("%d", &op);
    return op;
}

int inserirInicio(TipoNodo LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo)
{
    if (IA == *IL && FA == *FL)
        return 1;
    else
    {
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*IL > IA) 
            *IL = *IL - 1; 
        else
        {
            for (int i = *FL; i >= *IL; i--)
                LL[i + 1] = LL[i];
            *FL = *FL + 1;
        }
        LL[*IL] = infoNodo;
        return 0;
    }
}

int inserirFim(TipoNodo LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo)
{
    if (IA == *IL && FA == *FL)
        return 1;
    else
    {
        if (*IL == 0)
            *IL = *FL = IA;
        else if (*FL < FA)
            *FL = *FL + 1;
        else
        {
            for (int i = *IL; i <= *FL; i++)
                LL[i - 1] = LL[i];
            *IL = *IL - 1;
        }
        LL[*FL] = infoNodo;
        return 0;
    }
}

int removerNodo(TipoNodo LL[], int IA, int FA, int *IL, int *FL, int K, TipoNodo infoNodo)
{
    if ((K <= 0) || (K > *FL - (*IL + 1)))
        return 1;
    else
    {
        for (int i = *IL + (K - 1); i = *FL; i++)
        {
            LL[i] = LL[i + 1];
        }
        *FL = *FL - 1;
        if (*FL == (*IL - 1))
            *IL = *FL = 0;
        return 0;
    }
}

void ordenar(TipoNodo LL[])
{
    TipoNodo aux;
    for (int i = 0; i < N; i++)
    {
        if (LL[i].codigo > LL[i + 1].codigo)
        {
            aux = LL[i];
            LL[i] = LL[i + 1];
            LL[i + 1] = aux;
            i = -1;
        }
    }
}

int acessarNodo(TipoNodo LL[], int *IL, int *FL, TipoNodo valBuscado)
{
    bool achou = false;
    int posicao = 0;
    int i = *IL;
    ordenar(LL);
    while (i <= *FL && !achou)
    {
        if (LL[i].codigo == valBuscado.codigo)
        {
            posicao = i - *IL + 1;
            achou = true;
        }
        else
            i += 1;
    }
    return posicao;
}

int mostrar(TipoNodo LL[], int IA, int FA, int IL, int FL)
{
    for (int i = IA; i <= FA; i++)
    {
        if (i >= IL && i <= FL)
            printf("%4d - %g - %s\n", LL[i].codigo, LL[i].salario, LL[i].nome);
        else
            printf("-----------------\n");
    }
}