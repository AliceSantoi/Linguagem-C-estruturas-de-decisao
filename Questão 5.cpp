#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float q;
	int c;
	printf("===================================================");
	printf("\nC�DIGO DO ITEM    ESPECIFICA��O    PRE�O UNIT�RIO");
	printf("\n     100          Cachorro quente        8,00");
	printf("\n     101              Bauru              9,00");
	printf("\n     102             X-Salada           10,00");
	printf("\n     103            Hamb�rguer          12,00");
	printf("\n     104        Refrigerante (lata)      3,00");
	printf("\n===================================================");
	
	printf("\nDigite o c�digo do item desejado: ");
	scanf("%i", &c);
	
	switch(c){
		case 100:
			printf("\nDigite a quantidade do intem desejado: ");
			scanf("%f", &q);
			printf("\nO valor a ser pago �: R$ %.2f", q * 8);
			break;
		case 101:
			printf("\nDigite a quantidade do intem desejado: ");
			scanf("%f", &q);
			printf("\nO valor a ser pago �: R$ %.2f", q * 9);
			break;
		case 102:
			printf("\nDigite a quantidade do intem desejado: ");
			scanf("%f", &q);
			printf("\nO valor a ser pago �: R$ %.2f", q * 10);
			break;
		case 103:
			printf("\nDigite a quantidade do intem desejado: ");
			scanf("%f", &q);
			printf("\nO valor a ser pago �: R$ %.2f", q * 12);
			break;
		case 104:
			printf("\nDigite a quantidade do intem desejado: ");
			scanf("%f", &q);
			printf("\nO valor a ser pago �: R$ %.2f", q * 3);
			break;
		default:
			printf("\nC�digo inv�lido!");
			break;
	}	
	
	return(0);
}
