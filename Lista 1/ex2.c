#include<stdio.h>
#include<stdlib.h>

int main()
{
	float s;
	float p;
	float vp;
	float ns;
	
	printf("\n Digite o salário atual \n >");
	scanf(" %f", &s);
	
		if((s>=1000) && (s<1500)) 
	{
	p = 100;
	vp = (s*p)/100;
	ns = s+vp;
	printf("\n Atual salário é %0.2f, \n aplicado o percentual aplicado %0.2f, \n O valor do aumento é R$%0.3f, \n Sendo o salário novo de R$ %0.3f\n\n", s, p, vp, ns);
	}else{ if((s>=1500) && (s<2500)) 
	{
	p = 90;
	vp = (s*p)/100;
	ns = s+vp;
	printf("\n Atual salário é %0.2f, \n aplicado o percentual aplicado %0.2f, \n O valor do aumento é R$%0.3f, \n Sendo o salário novo de R$ %0.3f\n\n", s, p, vp, ns);
	}else{ if((s>=2500) && (s<3000)) 
	{
	p = 80;
	vp = (s*p)/100;
	ns = s+vp;
	printf("\n Atual salário é %0.2f, \n aplicado o percentual aplicado %0.2f, \n O valor do aumento é R$%0.3f, \n Sendo o salário novo de R$ %0.3f\n\n", s, p, vp, ns);
	}else{ if((s>=3000) && (s<3500)) 
	{
	p = 70;
	vp = (s*p)/100;
	ns = s+vp;
	printf("\n Atual salário é %0.2f, \n aplicado o percentual aplicado %0.2f, \n O valor do aumento é R$%0.3f, \n Sendo o salário novo de R$ %0.3f\n\n", s, p, vp, ns);
	}else{ if((s>=3500) && (s<4000)) 
	{
	p = 60;
	vp = (s*p)/100;
	ns = s+vp;
	printf("\n Atual salário é %0.2f, \n aplicado o percentual aplicado %0.2f, \n O valor do aumento é R$%0.3f, \n Sendo o salário novo de R$ %0.3f\n\n", s, p, vp, ns);
	}else{if(s>=4000)
	{
	p = 50;
	vp = (s*p)/100;
	ns = s+vp;
	printf("\n Atual salário é %0.2f, \n aplicado o percentual aplicado %0.2f, \n O valor do aumento é R$%0.3f, \n Sendo o salário novo de R$ %0.3f\n\n", s, p, vp, ns);
	}
	}}}}}
	return 0;
	
	
}

