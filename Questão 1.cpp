#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	
	if(n > 0){
		printf("\n%i � positivo!", n);
	} else if(n == 0){
		printf("\n0 � neutro!");
	}else{
		printf("\n%i � negativo", n);
	}
	
	return(0);
}
