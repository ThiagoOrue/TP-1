#include <stdio.h>

int main() {
    int x, y;
    int numero, aux = 0, contp = 0 , aux1 = 0, contimp = 0, aux2 = 0, contpares = 0, aux3 = 0;

    printf("Ingrese la cantidad de numeros del vector: \n");
    scanf("%d", &numero);

    int vec[numero];
    int primos[numero]; 
    int impares[numero];
    int pares[numero];
    
    for (x = 0; x < numero; x++) {
    	printf("Ingrese el numero:\n");
        scanf("%d", &vec[x]);
    }

    printf("Su vector:\n");
    for (x = 0; x < numero; x++) {
        printf("%d ", vec[x]);
    }

    
    for (x = 0; x < numero; x++) {
        aux = 0;
        for (y = 1; y <= vec[x]; y++) {
            if (vec[x] % y == 0) {
                aux++;
            }
        }
        if (aux == 2) {
            primos[contp] = vec[x];
            contp++;
            vec[x]=0;
        }
    }
    for(x=0;x<contp-1;x++)
    {
        for(y=0;y<contp-x-1;y++)
        {
            if(primos[y] > primos[y+1])
            {
                aux1 = primos[y];
                primos[y] = primos[y+1];
                primos[y+1] = aux1;
            }
        }
    }
    printf("\nNumeros primos encontrados:\n");
    for (x = 0; x < contp; x++) {
        printf("%d ", primos[x]);
    }
    printf("\n");
     for (x = 0; x < numero; x++) {
        printf("%d ", vec[x]);
    }
    
    
    
    
    
    
    
    
      for (x = 0; x < numero; x++) {
        if(vec[x]%2!=0)
        {
        	impares[contimp] = vec[x];
        	contimp++;
        	vec[x]=0;
		}
    }
       for(x=0;x<contimp-1;x++)
    {
        for(y=0;y<contimp-x-1;y++)
        {
            if(impares[y] < impares[y+1])
            {
                aux2 = impares[y];
                impares[y] = impares[y+1];
                impares[y+1] = aux2;
            }
        }
    }
     printf("\nNumeros impares encontrados:\n");
    for (x = 0; x < contimp; x++) {
        printf("%d ", impares[x]);
    }
    printf("\n");
     for (x = 0; x < numero; x++) {
        printf("%d ", vec[x]);
    }
    
    
    
    
      for (x = 0; x < numero; x++) {
        if(vec[x]%2==0)
        {
        	pares[contpares] = vec[x];
        	contpares++;
        	vec[x]=0;
		}
    }
       for(x=0;x<contpares-1;x++)
    {
        for(y=0;y<contpares-x-1;y++)
        {
            if(pares[y] > pares[y+1])
            {
                aux3 = pares[y];
                pares[y] = pares[y+1];
                pares[y+1] = aux3;
            }
        }
    }
     printf("\nNumeros pares encontrados:\n");
    for (x = 0; x < contpares; x++) {
    	if(pares[x]!=0)
    	{
    		 printf("%d ", pares[x]);
		}
       
    }
    printf("\n");
     for (x = 0; x < numero; x++) {
        printf("%d ", vec[x]);
    }
    
}
