#include <stdio.h>
#include <string.h>
int main()
{
	char Nombre [20];
	char Apellido [30];
	int DNI;
	int dia;
	int mes;
	int anio;
	
		printf("Ingrese su nombre: ");
		scanf("%s",&Nombre);

		printf("Ingrese su apellido: ");
		scanf("%s",&Apellido);
		
		printf("Ingrese su DNI: ");
		scanf("%d",&DNI);
		
	    printf("Ingrese el dia en el que nacio: ");
	    scanf("%d",&dia);
		printf("Ingrese el mes en el que nacio: ");
	    scanf("%d",&mes);	    
	    printf("Ingrese el anio en el que nacio: ");
	    scanf("%d",&anio);
	    
	   		if(anio == 2008 && mes > 9)
	    	{
	    		printf("Usted no puede votar.");
	    		
			}
			
			else if(anio > 2008)
	    	{
	    		printf("Usted no puede votar.");
	    		
			}
			
			else
	    	{
	    		printf("\n NOMBRE: %s",Nombre);
	    		printf("\n APELLIDO: %s",Apellido);
	    		printf("\n DNI: %d",DNI);
	    		printf("\n \nUsted puede votar.");
	    		
			}

	}
	    
