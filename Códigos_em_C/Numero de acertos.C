#include <stdio.h>
#include <stdlib.h>

void main()
{
    float numquestoes, acertos;
    printf("Quantos questoes o canditado acertou?\n");
    scanf("%f",&numquestoes);
    acertos = (numquestoes*100)/50;
    printf("Acertando %f questoes, o percentual de acertos e %f\n",numquestoes,acertos);
    return 0;
}
