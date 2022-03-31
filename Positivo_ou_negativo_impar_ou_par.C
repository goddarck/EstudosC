	#include <stdio.h>
	#include <stdlib.h>


	int main(){
		int numero;
		printf("\nDigite o numero: ");
		scanf("%i" , &numero);

	if ((numero%2 == 0)&&(numero > 0))
		printf("O numero %i e Positivo e Par!\n",numero);	
		if ((numero%2 != 0)&&(numero > 0))
			printf("O numero %i e Positivo e Impar!\n",numero);

	if ((numero%2 == 0)&&(numero < 0))
		printf("O numero %i e Negativo e Par!\n",numero);	
		if ((numero%2 != 0)&&(numero < 0))
			printf("O numero %i e Negativo e Impar!\n",numero);

	if (numero == 0)
			{printf("O numero %i e Neutro!\n", 0);}

}