/* Exercício 2 - Lista 13/04 */

#include <stdio.h>
#include <stdlib.h>
main () {

int N1, N2, N3, N4, MP;
printf("Digite o primeiro valor:");
scanf("%d",&N1);
printf("Digite o segundo valor:");
scanf("%d",&N2);
printf("Digite o terceiro valor:");
scanf("%d",&N3);
printf("Digite o quarto valor:");
scanf("%d",&N4);

MP=((N1*1)+(N2*2)+(N3*3)+(N4*4))/(10); /* 1+2+3+4 = 10 */

printf("\nA média ponderada é:" "%d", &MP);

}
