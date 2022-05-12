/* Exercício 3 - Lista 13/04 */

#include <stdio.h>
#include <stdlib.h>
main () {
float s_aplic,reaj,s_novo;
printf("O valor do saldo aplicado e \nR$");
scanf("%f",&s_aplic);
reaj=(s_aplic*1/100);
s_novo=(s_aplic+reaj);
printf("Apos o reajuste aplicado o saldo sera de R$ %.1f \n",s_novo);
return(0);
}

/** primeira aplicação feita:
#include <stdio.h>
#include <stdlib.h>
main () {
float valor, s_aplic,reaj,s_novo;

printf("Digite o valor:");
scanf("%f", valor);

printf("O valor do saldo aplicado e \nR$");
scanf("%f",&s_aplic);
reaj=(valor + s_aplic*1/100);
s_novo=(s_aplic+reaj);
printf("Apos o reajuste aplicado o saldo sera de R$ %.1f \n",s_novo);
return(0);
} **/
