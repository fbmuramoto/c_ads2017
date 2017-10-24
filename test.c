#include <stdio.h>

/*
//Define tipo lógico	

true: valor inteiro 1
false: valor inteiro 0

enum boolean {
	true = 1,
	false = 0
	};

typedef enum boolean bool; //determina nome da variável do tipo lógico
*/

int main() { //int substitui void, pois no mac não funciona void...

/*
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

//9. Laços de repetição

//9.1 Repita-Até-Que
	char voto, resp;
	int cont_s, cont_n;
	
	cont_s = 0;
	cont_n = 0;
	
	do {
		printf("Você tem computador em casa? S/N \n");
		scanf("%c, &voto);
		fflush(stdin); // não sei o que significa esse código...
		if (voto == 's') {
			cont_s++;
		} else {
			cont_n++;
		}
		printf("Deseja continuar? S/N \n");
		scanf("%c", &resp);
		fflush(stdin);
	} while (resp == 's');
	printf("Total Sim: %d \n Total Não: %d, cont_s, cont_n);

//9.2 Enquanto-Faça
	char voto, resp;
	int cont_s, cont_n;
	
	cont_s = 0;
	cont_n = 0;
	
	resp = 's'; //esse item vem no começo no laço enquanto-faça
	while (resp == 's') {
		printf("Você tem computador em casa? S/N \n");
		voto = getch (); // não sei também o que significa esse código...
		printf("%c \n", voto);
		if (voto == 's') {
			cont_s = cont_s + 1;
		} else {
			cont_n = cont_n + 1;
		}
		printf("Deseja continuar? S/N \n");
		resp = getch (); // não sei também o que significa esse código...
		printf("%c \n", resp);
	}
	printf("Total Sim: %d \n Total Não: %d, cont_s, cont_n);

//10. Laços Contados

//10.1 Para-Até
	int fat, i, n;
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	
	fat = 1;
	for (i=1; i<n; i++) {
		fat = fat*i;
	}
	printf("%d \n", fat);

//10.2 Tabuada
	int numero, i;
		printf("Escolha um número inteiro: ");
		scanf("%d", &numero);
		for (i=1; i<=10; i=i+1) {
			printf("%2d x %d = %2d \n", i, numero, i*numero);
		}

//11. Vetores e Matrizes
	int i;
	float t[3];
	float soma, media;
	
	soma=0;
	for (i=0; i<=2; i++) {
		printf("Digite a temperatura %d: \n", i);
		scanf("%f", &t[i]);
		soma=soma+t[i];
	}
	media=soma/3;
	printf("Média das temperaturas: %3.2f \n", media);
	for (i=0; i<=2; i++) {
		printf("A diferença %d é %3.2f \n", i, media-t[i]);
	}
*/

//12. Manipulação de Strings
	char c;
	printf("Digite uma frase: ");
	do {
		c = getchar(); //leitura do 'buffer'
		if (c>=97 && c<=122) { //se c é minúsculo
			c-=32; //transforma em maiúsculo
		}
		putchar(c); //impressão dos caracteres maiúsculos
	} while (c!='\n');

	return 0; //insere essa linha para retornar um inteiro
}
