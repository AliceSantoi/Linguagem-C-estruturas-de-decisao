#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a1, a2, a3, mp, mf, af;
	printf("Digite sua primeira nota: ");
	scanf("%f", &a1);
	printf("\nDigite sua segunda nota: ");
	scanf("%f", &a2);
	printf("\nDigite sua terceira nota: ");
	scanf("%f", &a3);
	
	mp = (a1 + a2 + a3)/3;
	
	if(mp >= 7.0){
		printf("\n\nVoc� obteve m�dia %.1f e est� aprovado!", mp);
	} else if(mp > 3.5 && mp < 7.0){
		printf("\n\nVoc� obteve m�dia %.1f e precisa fazer a Avalia��o Final!", mp);
		printf("\nDigite sua nota na Avalia��o Final: ");
		scanf("%f", &af);
		mf = ((6 * mp) + (4 * af))/10;
		if(mf >= 5.0){
			printf("\nVoc� obteve Media Final %.1f e est� aprovado!", mf);
		} else{
			printf("\nVoc� obteve Media Final %.1f e est� reprovado!", mf);
		}
	} else{
		printf("\n\nVoc� obteve m�dia %.1f e est� reprovado!", mp);
	}
	return(0);
}
