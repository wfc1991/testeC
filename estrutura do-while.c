#include <stdio.h>

int main(void)
{
	printf("\n exemplo estrutura de repeticao do-while");
	printf("\n*-------*");
	int contador = 0;
	do {
		contador++;
		printf("\n o valor do contador e = %d", contador);
	}
	while (contador < 10);
	printf("\n*-------*");
	printf("\n o valor do contador na saida do laco e = %d", contador);
	return 0;
	
	}
	
