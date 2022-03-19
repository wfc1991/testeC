#include <stdio.h>
float entradaDados(int numeroEntrada) //o objetivo desta funçaõ é a entrada de dados
{
 float nota;
 printf("\n Entre com a nota # %d: ", numeroEntrada);
 scanf("%f",&nota);
 return nota;	
} //aqui começa o programa - Função MAIN()

int main (void)
{
	float n1, n2, n3, n4, media; //declara as variaveis para receber as notas
	
	n1 = entradaDados(1); //chama a função para obter a nota 1
	n2 = entradaDados(2); //chama a função para obter a nota 2
	n3 = entradaDados(3); //chama a função para obter a nota 3
	n4 = entradaDados(4); //chama a função para obter a nota 4
	
	media = (n1+n2+n3+n4) / 4;
	
	if (media >= 7.0)
	{
		printf("Aluno aprovado com media %f : ", media);
	} else {
		printf("Aluno reprovado com media %f : ", media);
	}
	return 0;
}
