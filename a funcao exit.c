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
	int numeroEntrada = 3;
	if(verificaPar(numeroEntrada))
	{
		printf("\n OK era esperado par.");
	} else{
		printf("\n nao retornou par. vou cancelar o programa!\n");
		exit(1);//termina o programa neste ponto
	}
	return 0;
}
