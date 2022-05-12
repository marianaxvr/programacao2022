/*** Exercício 7 - Lista 2 ***/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

int main()
 { 
 int par=0, num, i; 
  setlocale(LC_ALL,"Portuguese"); 
 for (i=1; i<=10; i++) 
    {
      printf("Informe número: "); 
      scanf("%d", &num); 
      if (num%2==0)
        { 
          par=par+1; 
         }
    }

printf("\n Quantidade de números Pares: %d\n", par); 
printf("Quantidade de números Impares: %d", 10-par); 
printf("\n");

return 0;
}