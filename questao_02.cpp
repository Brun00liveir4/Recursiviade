#include <stdio.h>

#define MAXIMO 10

int fibonacci(int numero) 
{
	int resultado;
	
	if(numero<=1)
	{
		return(1);
	}
	else
	{
		resultado = fibonacci(numero - 1) + fibonacci(numero - 2);
		return(resultado);
	}
}

int main()
{
	int contadorNumero = 0, resultadoFinal;
	
	for(contadorNumero = 0; contadorNumero <= MAXIMO; contadorNumero++)
	{
		resultadoFinal = fibonacci(contadorNumero);
		printf(" %d ", resultadoFinal);
	}
}
