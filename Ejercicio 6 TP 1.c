#include <stdio.h>

int main()
{
	int x,y,numero;
	
	printf("Ingrese un numero para verificar si es primo: ");
	scanf("%d",&numero);
	
	if (numero == 2 || numero == 3 || numero == 5 || numero == 7)
	{
		printf("%d es un numero primo",numero);
	}
	
	else if(numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0 || numero % 7 == 0)
	{
		printf("%d no es un numero primo",numero);
	}
	
	else
	{
		printf("%d es un numero primo",numero);
	}
}
