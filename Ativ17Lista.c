#include<stdio.h>

int main(){
	int num,fatorial;
	printf("Digite o numero para calcular fatorial: ");
	scanf("%d",&num);
	for(fatorial = 1; num > 1;num = num -1)
	{
			fatorial = num*fatorial;
	}
	printf("Numero fatorial: %d",fatorial);
	
	return 0;
}
