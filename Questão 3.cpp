#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	int opcao;
	printf("=======================");
	printf("\nCalculadora\n");
	printf("=======================");
	
	printf("\n1 - soma");
	printf("\n2 - subtra��o");
	printf("\n3 - multiplica��o");
	printf("\n4 - divis�o");
	printf("\n=======================");
	
	printf("\nEscolha uma op��o: ");
	scanf("%i", &opcao);
	switch(opcao){
		case 1:
			printf("\nDigite um n�mero para a soma: ");
			scanf("%f", &n1);
			printf("Digite outro n�mero para a soma: ");
			scanf("%f", &n2);
			printf("\nO resultado da soma �: %.1f", n1 + n2);
			break;
		case 2:
			printf("\nDigite um n�mero para a subtra��o: ");
			scanf("%f", &n1);
			printf("Digite outro n�mero para a subtra��o: ");
			scanf("%f", &n2);
			printf("\nO resultado da soma �: %.1f", n1 - n2);
			break;
		case 3:
			printf("\nDigite um n�mero para a multiplica��o: ");
			scanf("%f", &n1);
			printf("Digite outro n�mero para a multiplica��o: ");
			scanf("%f", &n2);
			printf("\nO resultado da soma �: %.1f", n1 * n2);
			break;
		case 4:
			printf("\nDigite o numerador da divis�o: ");
			scanf("%f", &n1);
			printf("Digite o denominador da divisa�: ");
			scanf("%f", &n2);
			if(n2 == 0){
				printf("\nA divis�o � indefinida!");
			} else{
				printf("\nO resultado da soma �: %.1f", n1 / n2);
			}
			break;
		default:
			printf("\nOp��o inv�lida");
			break;
	}
	return(0);
}
