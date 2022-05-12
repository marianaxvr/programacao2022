/*** Exercício 8 - Lista 2 ***/

#include <stdio.h>
#include <stdlib.h>

main () {
    int i, num;
    for (i=1; i<=10; i++) {
        num= i%2;
        if (num%2 ==0)
            printf ("Numero par: %d\n",i);
    }
}