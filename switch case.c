#include <stdio.h>
char menu(void)
{
	char opcaoDigitada;
	printf("\n n*-----------*");
	printf("\n* cadastro de clientes*");
	printf("\n* *");
	printf("\n* 1 - consulta *");
	printf("\n* 2 - alteracao *");
	printf("\n* 3 - inclusao *");
	printf("\n* 4 - exclusao *");
	printf("\n* 0 - sair *");
	printf("\n*--------*");
	printf("\n* selecione a opcao: *");
	opcaoDigitada=getchar(); //le do teclado a opcao
	return opcaoDigitada;
}
int main(void)
{
	char opcao = menu();
	switch (opcao)
	{case'1':
			printf("\n voce_escolheu_consulta");
			break;
			case '2':
				printf("\n voce escolheu alteracao");
				break;
				case'3':
			printf("\n voce escolheu inclusao");
			break;
			case'4':
			printf("\n voce escolheu exclusao");
			break;
			case'0':
			printf("\n voce escolheu sair");
			break;
	}
	return 0;
}

