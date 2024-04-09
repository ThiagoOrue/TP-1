#include <stdio.h>
#include <string.h>

int main()
{
	int numero;
	
	printf("Ingrese un numero para verificar si es primo: ");
	scanf("%d",&numero);
		
		if(numero%2 != 0 || numero == 2) {
			printf("%d es primo",numero);
		}
		
		else
		{
				printf("\n\n%d no es un numero primo.",numero);
		}
				
}
