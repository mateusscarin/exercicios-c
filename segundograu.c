#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

    float a, b, c, x1, x2, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = (pow(b,2)) - (4 * a * c);

    x1 = ((b*(-1)) + sqrt(delta))/(2*a);
    x2 = ((b*(-1)) - sqrt(delta))/(2*a);

    printf("O valor de x1 e %.1f e de x2 e %.1f \n", x1, x2);
    system("pause");
}
