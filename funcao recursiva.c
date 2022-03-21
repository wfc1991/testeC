//calculo de fatorial com função recursiva
#include <stdio.h>
//função recursiva que calcula o fatorial de um numero inteiro n
double fatorial(int entrada)
{
	double vfatorial;
	printf("\n sequencia de chamadas recursivas = %d", entrada);
	if(entrada <= 1)//caso base: fatorial de n <=1 retorna 1
	return(1);
	else
	{
		vfatorial = entrada * fatorial(entrada - 1);
		printf("\n valores retornados = %2.f", vfatorial);
		return(vfatorial);
	}
}
int main(void)
{
	int numero;
	double f;
	printf("\n digite o numero que deseja calcular o fatorial: ");
	scanf("%d", numero);
	printf("\n programa claculo de fatorial");
	printf("\n *------------*");
	//chamada de função fatorial
	f = fatorial(numero);
	printf("\n fatorial de %d = %.01f", numero, f);
	return 0;
}
