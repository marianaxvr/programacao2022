/* Exercício 5 - Lista 13/04 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int nFunc;
float hTrab, vHora, salario;

printf("Digite o número deste funcionário:");
scanf("%d", nFunc);
printf("Digite o número de horas trabalhadas:");
scanf("%f", hTrab);
printf("Digite o valor da hora trabalhada:");
scanf("%f", vHora);

salario=hTrab*vHora;
printf("\nO salário deste funcionário é:" "%f", &salario);

}

