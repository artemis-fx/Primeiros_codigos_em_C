#include <stdio.h>
#include <stdlib.h>

void main()
{
    float reais, dolares;
    printf("Quanto de dinheiro voce tem?\n");
    scanf("%f",&reais);
    dolares = reais/5.44;
    printf("Convertendo %f R$ para dolares, a quantia ficara %f U$ \n",reais, dolares);
    return 0;
}