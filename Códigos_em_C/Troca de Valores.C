#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c;
    printf("Digite um numero para a posicao A: \n");
    scanf("%d",&a);
    printf("Digite um numero para a posicao B: \n");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("A=%d B=%d\n",a,b);
    return 0;
}
