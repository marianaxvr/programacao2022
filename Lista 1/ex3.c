#include<stdio.h>
#include<stdlib.h>

int main()
{
	char sexo;
	int t;
	float f, s, b, vb;
	
	printf("\n Digite o código do funcionário \n >");
	scanf(" %f", &f);
	printf("\n Digite o sexo do funcionário (M ou F) \n >");
	scanf(" %c", &sexo);
	printf("\n Digite o tempo de trabalho \n >");
	scanf(" %i", &t);
	printf("\n Digite o salário \n >");
	scanf(" %f", &s);
	
	if((sexo=='M') && (t>15)) 
	{
	b = 20;
	vb = (s*b)/100;
	printf("\n O valor do bônus é %f \n", vb);
	}else{ if((sexo=='F') && (t>10)) 
	{
	b = 25;
	vb = (s*b)/100;
	printf("\n O valor do bônus é %f \n", vb);
	}else
	b = 100;
	vb = s+b;
	printf("\n O valor do bônus é %f \n", vb);
	}

	return 0;
	
}
