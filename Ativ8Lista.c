#include<stdio.h>
/*O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo
ao consumidor.*/

int main(){
	
	int fabrica,consumidor;
	
	printf("Digite o valor de um carro com custo de fabrica: ");
	scanf("%d",&fabrica);
	consumidor = fabrica + (fabrica *0.25 + fabrica * 0.42);
	
	printf("Valor final para consumidor: %d",consumidor);
	
	return 0;
}
