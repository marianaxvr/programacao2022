#include <stdio.h>

int main()
{
    float n1, n2, n3, a, p, h;
    char n;
    
    printf("\nDigite qual nota deseja calcula a, p, h: ");
    scanf("%c", &n);
    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
    
    
  /*  a = ((n1+n2+n3)/3);
    p = (((n1*3)+(n2*3)+(n3*4))/(3+3+4));
    h = (3/((1/n1)+(1/n2)+(1/n3)));*/
    
if(n == 'a')
{
   printf("\nA média aritmética é: %.2f\n",((n1+n2+n3)/3));
   
} else if(n == 'p')
{
    printf("\nA média ponderada é: %.2f\n",(((n1*3)+(n2*3)+(n3*4))/(3+3+4)));
}      else{
    printf("\nA média harmonica é: %.2f\n",(3/((1/n1)+(1/n2)+(1/n3))));
}

    return 0;
}




