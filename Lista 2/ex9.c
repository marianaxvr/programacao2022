/*** Exercício 9 - Lista 2 ***/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int num;
   int impressos; // números já impressos
   int par;

   printf("\n \tGerador de números pares\n");
   printf("\n Digite o valor de n: ");
   scanf("%d", &num);
   impressos=0;
   par=2;

   printf("Os %d primeiros números pares são:\n", num);
   if(impressos <= num){
       printf("%d\n", par);
       par = par + 2;
       impressos = impressos + 1;
   }

    return 0;
}