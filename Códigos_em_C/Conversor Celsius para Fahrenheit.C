#include <stdio.h>
#include <stdlib.h>

void main()
{
    float celsius, Fahrenheit;
    printf("Qual a temperatura em graus celsius?\n");
    scanf("%f",&celsius);
    Fahrenheit = (9*celsius+160)/5;
    printf("Convertendo %f graus Celsius para Fahrenheit, temos %f\n",celsius,Fahrenheit);
    return 0;
}
