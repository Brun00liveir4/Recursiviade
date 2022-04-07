#include <stdio.h>

int potenciacao(int base, int potencia) 
{
	int resultado;

	if(base<=1 || potencia==0)
	{
		return (1);
	}
	else
	{
		resultado = base * potenciacao(base, potencia-1);
		return (resultado);
	}
}

int main()
{
	int numeroBase, numeroPotencia, numeroResultado;
	
	printf("Digite a base: ");
	scanf("%d",&numeroBase);
	printf("Digite a potencia: ");
	scanf("%d",&numeroPotencia);
	numeroResultado = potenciacao(numeroBase, numeroPotencia);
	printf("Resultado de %d ^ %d = %d", numeroBase, numeroPotencia, numeroResultado);
}
