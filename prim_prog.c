//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int cont, n, par, impar, num; //declaração de variáveis do tipo inteiro
	printf ("Digite o tamanho da sequencia: "); //mostra a mensagem na tela pedindo ao usuario para digitar algo
	scanf ("%d",&n); //lê informação do teclado digitada pelo usuário
	//variáveis serão iniciadas em 0
	par = 0;
	impar = 0;
	cont = 0;
	//a seguir será iniciado um looping nele vamos verificar o tamanho da sequencia definida pelo usuário
	while (cont < n)
	{
		printf("Digite o %do. numero: ", cont+1);
		scanf("%d", &num);
		if (num%2 == 0)
		par = par +1;
		else
		impar = impar +1;
		cont = cont +1;
	}
	printf("A sequencia e formada por %d numeros pares e %d impares./n/n", par,impar);
	system("PAUSE");
	return 0;
}
