/*** Exercício 6 - Lista 2

esse aqui eu não entendi muito bem, não

***/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("\n\t Digite um número positivo: \n");
    scanf("%d",&num);

    while (num<=10){
        printf(" \n",num);
        num++;
    }
    return 0;
}