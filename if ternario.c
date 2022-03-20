#include <stdio.h>
int main(void)
{
	int valor, valor2;
	printf("informe um numero");
	scanf("%d", valor);
	valor2 = (valor < 0) ? 0: valor;//resolvido na mesma linha
	printf("\n resolvido com operador ternario?");
	printf("\n o valor de valor2 e: %d \n\n", valor2);
	return 0;
}
