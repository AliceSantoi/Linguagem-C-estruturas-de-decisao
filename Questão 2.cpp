#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, d;
	printf("Digite um n�mero para o numerador: ");
	scanf("%i", &n);
	printf("Digite um n�mero para o denominador: ");
	scanf("%i", &d);
	
	if(d == 0){
		printf("\nA divis�o � indefinida!");
	} else{
		if(n % d ==0){
			printf("\n%i � divis�vel por %i", n, d);
		} else{
			printf("\n%i n�o � divis�vel por %i", n, d);
		}
	}
	return(0);
}
