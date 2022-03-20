#include <stdio.h>
#include <stdlib.h>

int entradaDados()
{
	int numeroEntrada;
	printf("\n informe o numero base para a tabuada");
	scanf("%d", numeroEntrada);
	return numeroEntrada; //retorna o valor digitado pelo usuario
}
//-----------------------------------------------------
int main(void)
{
	int numeroDigitado = entradaDados();
	if(numeroDigitado < 1 || numeroDigitado > 10)
	{
		printf("\n numero informado invalido(FORA DO INTERVALO 1-10)");
		exit(0); //termina o programa
	}
	printf("\n *-------------------*");
	printf("\n voce selecionou a tabuada do %d", numeroDigitado);
	printf("\n *-------------------*");
	for(int controle= 1; controle <= 10; controle++)
	{
		printf("\n %d x %d = %d", controle, numeroDigitado, numeroDigitado * controle);
	}
	
	return 0;
}

