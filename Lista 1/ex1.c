#include<stdio.h>
#include<stdlib.h>

int main()
{
	int d;
	float t=0;
	float v=0;
	
	printf("\n Digite o número de diárias \n >");
	scanf(" %i", &d);
	
	if (d<15)
	{
	t = 2.5;
	v = (95*d)+(t*d);
	printf("\n O valor a ser pago é RS %0.3f\n\n", v);
	}if(d==15){
	t = 1.5;
	v = (95*d)+(t*d);
	printf("\n O valor a ser pago é RS %0.3f\n\n", v);
	}if(d>15){
	t = 0.5;
	v = (95*d)+(t*d);
	printf("\n O valor a ser pago é RS %0.3f \n\n", v);
	}
	
	return 0;
	
}

