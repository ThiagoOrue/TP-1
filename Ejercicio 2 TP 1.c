#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int dia;
	int mes;
	int anio;
	int dni, x=0, anio_votacion=2024, mes_votacion=9, dia_votacion=30;
	char nombre[30], apellido[30];
	
	printf("\n\n\t|Nombre: ");
	scanf("%s", &nombre);
	
	printf("\n\t|Apellido: ");
	scanf("%s", &apellido);
	
	printf("\n\t|Fecha de nacimiento: ");
	
	printf("\n\n\t Dia: ");
	scanf("%d", &dia);
	printf("\t Mes: ");
	scanf("%d", &mes);
	printf("\t Anio: ");
	scanf("%d", &anio);
	
	printf("\n\t|DNI: ");
	scanf("%d", &dni);
	
	
	for(x=0;x<1;x++)
	{
		
		if(anio_votacion-anio<16)
		{
			printf("\n\n\t Usted no puede votar.");
			printf("\n\t Edad minima requerida: 16");
		}
		
		
		if(anio_votacion-anio==16)
		{
			if(mes>9)
			{
				printf("\n\n\t Usted no puede votar.");
				printf("\n\t Edad minima requerida: 16");
			}
			
			if(mes==9)
			{
				if(dia<=30)
				{
					printf("\n\n\t Usted puede votar.");	
				}
				
				if(dia>30)
				{
					printf("\n\n\t Usted no puede votar.");
					printf("\n\t Edad minima requerida: 16");	
				}
			}
			
			if(mes<9)
			{
				printf("\n\n Usted puede votar.");
			}
		}
		
		
		if(anio_votacion-anio>16 && anio_votacion-anio<18)
		{
			printf("\n\n\t Usted puede votar.");
		}
		
		
		if(anio_votacion-anio>=18 && anio_votacion-anio<80)
		{
			printf("\n\n\t Usted debe votar.");
		}
		
		
		if(anio_votacion-anio>=80)
		{
			printf("\n\n\t Usted puede votar.");
		}
	
		
		printf("\n\n\t Nombre: %s", nombre);
		printf("\n\t Apellido: %s", apellido);
		printf("\n\t DNI: %d", dni);
	}
}
