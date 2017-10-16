#include <stdio.h>

//Define tipo lógico	
/*
true: valor inteiro 1
false: valor inteiro 0
*/

enum boolean {
	true = 1,
	false = 0
	};

typedef enum boolean bool; //determina nome da variável do tipo lógico

int main() {//int substitui void, pois no mac não funciona void...

//Meu primeiro programa em C
	printf("Meu primeiro programa em C! \n");	

//Tipo lógico
	bool b = true;
	if (b) {
		b = false;
	}

//Tipos de variáveis
	int idade=37;
	double peso=58.735;
	char sexo='f';

	const double pi = 3.14159; //const <tipo de dado> <nome da variável> = <valor da variável>

	printf("Tenho %d anos, peso %.2f e sou do sexo %c.\n", idade, peso, sexo); //%f, %e, $g = double p/ printf ou float p/ scanf

//Exemplo de programa para cálculo de nota
	double nota1, nota2, media;
	printf("Entre com a nota 1 e a nota 2:");
	scanf("%lf %lf", &nota1, &nota2); //faz a entrada dos dados, lê as variáveis de entrada
	media=(nota1+nota2)/2; //função de cálculo de média
	printf("A média entre %.1lf e %.1lf = %.1lf.\n", nota1, nota2, media); //%lf, %le, %lg = double p/ scanf
	
//Se então: if
	int numero;
	printf("Entre com um número:");
	scanf("%d", &numero);
	if (numero < 0) {
		printf("Negativo. \n");
	}
	
	return 0; //insere essa linha para retornar um inteiro
}
