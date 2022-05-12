/* Exercício 4 - Lista 13/04 */

#include <stdio.h>
#include <stdlib.h>

main () {

 int tgc;
 printf("Informe temperatura em graus Centígrados: ");
 scanf("%d",&tgc);
 printf("\n%d graus Centígrados corresponde a %3.2f graus Farenheit: \n\n", tgc, float(9*tgc+160)/5);
 system("PAUSE");
 return 0;

}
