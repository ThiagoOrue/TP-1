#include <stdio.h>
#include <math.h>

int main ()
{
	float lado1,lado2,cat1,cat2,hipotenusa;
	
	printf("Ingrese el valor de uno de los lados: ");
	scanf("%f",&lado1);
	printf("Ingrese el valor de otro de los lados: ");
	scanf("%f",&lado2);
		
		if(lado1 > lado2)
		{
			hipotenusa = lado1;
			cat1 = lado2;
			cat2 = sqrt(lado1 * lado1 - lado2 * lado2);
		}
		else
		{
			hipotenusa = lado2;
			cat1 = lado1;
			cat2 = sqrt(lado2 * lado2 - lado1 * lado1);
		}
	
	printf("El valor del primer cateto es: %f\n",cat1);
	printf("El valor del segundo cateto es: %f\n",cat2);
	printf("El valor de la hipotenusa es: %f\n",hipotenusa);
}
