#include <stdio.h>

int potenciacao(int baseUm, int baseDois, int potencia) 
{
	int resultadoUm, resultadoDois, resultadoFinal;

	if(potencia==0)
	{
		return (1);
	}
	else
	{
		resultadoUm = baseUm * potenciacao(baseUm, 1, potencia-1);
		resultadoDois = baseDois * potenciacao(1, baseDois, potencia-1);
		resultadoFinal =  resultadoUm * resultadoDois;
		return (resultadoFinal);
	}
}

int main()
{
	int numeroBaseUm, numeroBaseDois, numeroPotencia, numeroResultado;
	
	printf("Digite a base: ");
	scanf("%d",&numeroBaseUm);
	printf("Digite a outra base: ");
	scanf("%d",&numeroBaseDois);
	printf("Digite a potencia: ");
	scanf("%d",&numeroPotencia);
	numeroResultado = potenciacao(numeroBaseUm, numeroBaseDois, numeroPotencia);
	printf("Resultado de %d ^ %d * %d ^ %d = %d", numeroBaseUm, numeroPotencia, numeroBaseDois, numeroPotencia, numeroResultado);
}
