#include <stdio.h>

int MDC(int aa, int bb) 
{
	int resultado;

	if(bb==0)
	{
		resultado = aa;
		return (resultado);
	}
	else
	{
		resultado = MDC(bb,(aa % bb));
		return (resultado);
	}
}

int main()
{
	int a, b;
	
	printf("Digite a: ");
	scanf("%d",&a);
	printf("Digite b: ");
	scanf("%d",&b);
	printf("Resultado = %d", MDC(a,b));
	return(0);
}
