#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, ac;
    char s;
    printf("Digite o sexo: \n");
    scanf("%c", &s);
    printf("Digite a idade da pessoa: \n");
    scanf("%i",&i);
    printf("Digite quantos ano de contribuição a pessoa tem: \n");
    scanf("%i",&ac);
    
    if(s=='m' && i>=65 && ac>=10)
    {
        printf("Aposentável");
    }
     else if(s=='m' && i>=63 && ac>=15)
    {
        printf("Aposentável");
    }
     else if(s=='f' && i>=63 && ac>=10)
    {
        printf("Aposentável");
    }
     else if(s=='f' && i>=61 && ac>=15)
    {
        printf("Aposentável");
    }
    else
    {
        printf("Não Aposentável");
    }
    

    return 0;
}
