#include <stdio.h>

//Define tipo lógico	

/*
Valores lógicos para Verdadeiro (V) e Falso (F):
• true: valor inteiro 1
• false: valor inteiro 0

► Código:
-----
enum boolean {
	true = 1,
	false = 0
	};

typedef enum boolean bool; //determina nome da variável do tipo lógico
-----

C não tem tipo lógico. Pode ser definido pela declaração a seguir:
► Código:
-----
#define BOOL char
#define FALSE 0
#define TRUE 1
-----
*/

int main() {//int substitui void, pois no MacOSX não funciona void...

//1. Meu primeiro programa em C
	printf("Meu primeiro programa em C! \n");	

//2. Tipo lógico
	bool b = true;
	if (b) {
		b = false;
	}

//3. Tipos de variáveis
	int idade=37;
	double peso=58.735;
	char sexo='f';

	const double pi = 3.14159; //const <tipo de dado> <nome da variável> = <valor da variável>

	printf("Tenho %d anos, peso %.2f e sou do sexo %c.\n", idade, peso, sexo); //%f, %e, $g = double p/ printf ou float p/ scanf

//4. Exemplo de programa para cálculo de nota
	double nota1, nota2, media;
	printf("Entre com a nota 1 e a nota 2:");
	scanf("%lf %lf", &nota1, &nota2); //faz a entrada dos dados, lê as variáveis de entrada
	media=(nota1+nota2)/2; //função de cálculo de média
	printf("A média entre %.1lf e %.1lf = %.1lf.\n", nota1, nota2, media); //%lf, %le, %lg = double p/ scanf

	int numero; //definição da variável para os próximos exemplos.
	
//5. Se então: if
	printf("Entre com um número:");
	scanf("%d", &numero);
	if (numero < 0) {
		printf("Negativo. \n");
	}

//6. Se então senão: if else
	printf("Entre com um número:");
	scanf("%d", &numero);
	if (numero < 0) {
		printf("Negativo. \n");
	}
	else {
		printf("Positivo. \n");
	}
	 
//7. Condicionais aninhadas
	int n1, n2, n3;
	printf("Digite 3 números: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2) {
		if (n1 > n3) {
			printf("O maior é %d \n", n1);
		}
		else {
			printf("O maior é %d \n", n3);
		}
	}
	else {
		if (n2 > n3) {
			printf("O maior é %d \n", n2);
		}
		else {
			printf("O maior é %d \n", n3);
		}
	}

//8. Escolha-caso
	float num1, num2;
	char op;
	printf("Digite: número operador número -> ");
	scanf("%f %c %f", &num1, &op, &num2);
	switch (op) {
		case '+':
			printf(" = %.3f \n", num1+num2);
			break;
		case '-':
			printf(" = %.3f \n", num1-num2);
			break;
		case '*':
			printf(" = %.3f \n", num1*num2);
			break;
		case '/':
			if (num2 != 0) {
				printf(" = %.3f \n", num1/num2);
			} else {
				printf("Não é um número. \n");
			}
			break;
		default:
			printf("Operação Inválida \n");
			break;
	}
		 
	return 0; //insere essa linha para retornar um inteiro
}
