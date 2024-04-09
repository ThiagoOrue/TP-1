#include <stdio.h>
#include <math.h>

int main()
{
	
	float cat1,cat2,hipotenusa;
	
		printf("Ingrese el valor del primer cateto: ");
		scanf("%f",&cat1);
		printf("Ingrese el valor del segundo cateto: ");
		scanf("%f",&cat2);
		
		hipotenusa = sqrt(cat1 * cat1 + cat2 * cat2);
		
		printf("El valor de la hipotenusa es: %f",hipotenusa);
	
}
