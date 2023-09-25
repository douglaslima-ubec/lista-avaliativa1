/*
Algoritmo e Programação Estruturada
Professor(a): João Robson
Estudante: Douglas Souza de Lima
Lista avaliativa 1 - Questão 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

int main(){
        
    void comparaNumeros(int A,int B){
        if(A == B){
            printf("Os valores lidos sao iguais\n");
        }else{
            if(A > B){
                printf("%d eh maior que %d\n",A,B);
                
                if(A % B == 0){
                    printf("%d eh multiplo de %d\n",A,B);
                }else{
                    printf("%d nao eh multiplo de %d\n",A,B);
                }
            }else{
                printf("%d eh maior que %d\n",B,A);
                
                if(B % A == 0){
                    printf("%d eh multiplo de %d\n",B,A);
                }else{
                    printf("%d nao eh multiplo de %d\n",B,A);
                }
            }
        }
    }
    
    int numeros[2] = {42,42};
    comparaNumeros(numeros[0],numeros[1]);
    
    int numeros2[2] = {3,10};
    comparaNumeros(numeros2[0],numeros2[1]);
    
    int numeros3[2] = {8,4};
    comparaNumeros(numeros3[0],numeros3[1]);
    
    return 0;
}
