#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//função com retorno de valor tipo booleano
bool verificaPar(int numero)
{
	if(numero % 2 == 0)
	{
		return true;	
	} else{
		return false;
	}
}
int main(void)
{
	int numero = 1;
	for(numero = 1; numero <= 10; numero++)
	{
		printf("\n *------------*");
		if(verificaPar(numero))
		{
			printf("\n ok era esperado par");
		} else{
			printf("\n nao retornou par");
			continue;//para numeros impares, o programa voltara para a linha 17 e não executa a linha 27
		}
		printf("\n produto numero par %d*2 e %d", numero, numero * 2);
	}//fim do for
	return 0;
}
