#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, antecessor, sucessor;
    printf("Digite um numero\n");
    scanf("%d",&num);
    antecessor = num-1;
    sucessor = num+1;
    printf("O Antecessor do numero %d e %d\n",num,antecessor);
    printf("O Sucessor do numero %d e %d\n",num,sucessor);
    return 0;
}
