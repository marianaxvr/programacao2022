/*** Exercício 2 - Lista 2 ***/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    num=1;
    printf("\n\t Imprimir os números de 1 a 10: \n");
    for(num=1; num<=10;num++);
    
    {
        printf("%d\n",num);
        num++;
    }

    return 0;
}
