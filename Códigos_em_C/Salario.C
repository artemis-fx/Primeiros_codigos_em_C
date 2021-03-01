#include <stdio.h>
#include <stdlib.h>

void main()
{
    float salario, novosalario;
    printf("Salario: \n");
    scanf("%f",&salario);
    novosalario = salario+(salario*10/100);
    printf("Salario com aumento: %f\n",novosalario);
    return 0;
}
