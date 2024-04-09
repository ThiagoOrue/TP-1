#include <stdio.h>
#include <string.h>

int main ()
{
	int cantdenumeros, numero, x, par = 0, impar = 0;
	
	printf("Ingrese la cantidad de numeros que quiere ingresar: ");
	scanf("%d",&cantdenumeros);
		
		int vector[cantdenumeros];
		
		for(x = 0; x < cantdenumeros; x++)
		{
			
			printf("Ingrese un numero: ");
			scanf("%d",&vector[x]);
			
			if(vector[x]%2 == 0) {
				par++;
			}
		
			else
			{
				impar++;
			}
			
		}
		
	printf("\nLa cantidad de numeros es: %d",cantdenumeros);
	printf("\nLa cantidad de pares es: %d",par);
	printf("\nLa cantidad de impares es: %d",impar);
}
