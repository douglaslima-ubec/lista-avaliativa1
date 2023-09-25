/*
Algoritmo e Programação Estruturada
Professor(a): João Robson
Estudante: Douglas Souza de Lima
Lista avaliativa 1 - Questão 2
*/

#include <stdio.h>

int main(){
	
	int somaDigitos(int N){
		
		int soma = 0;
		
		while(N>0){
			//obtem o digito mais a direita
			int digito = N % 10;
			soma += digito;
			N /= 10;
		}
		
		return soma;
		
	}
	
	void verificaNumero(int N){
		
		if(N%2==0){
			printf("%d eh par",N);
			printf("\n");
		}else{
			printf("%d eh impar",N);
			printf("\n");
		}
		
		int soma = somaDigitos(N);
		
		printf("A soma dos algarismos de %d eh igual a %d",N,soma);
		printf("\n");
		
	}
	
	int N[3] = {0,4242,121};
	
	verificaNumero(N[0]);
	verificaNumero(N[1]);
	verificaNumero(N[2]);
	
	return 0;
}
