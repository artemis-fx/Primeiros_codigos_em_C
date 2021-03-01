#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char curso[100];
    puts("Qual o curso que voce esta matriculado?");
    gets(curso);
    printf("O curso de %s e um excelente curso\n",curso);
    return 0;
}
