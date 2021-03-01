#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2, num3, soma;
    printf("Digite o Primeiro número: \n");
    scanf("%d",&num1);
    printf("Digite o Segundo número: \n");
    scanf("%d",&num2);
    printf("Digite o Terceiro número: \n");
    scanf("%d",&num3);

    soma = num1+num2+num3;
    printf("Soma: %d \n",soma);
    return 0;
}
