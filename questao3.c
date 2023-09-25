/*
Algoritmo e Programação Estruturada
Professor(a): João Robson
Estudante: Douglas Souza de Lima
Lista avaliativa 1 - Questão 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

int main(){
    
    void verificaSenha(char senhas[][5]){
        
        printf("senha cadastrada: %s\n",senhas[0]);
        
        bool validar = false;
        int i = 1;
        
        while(validar == false){
            //função que compara duas strings
            //retorna 0 se forem iguais
            validar = !strcmp(senhas[0],senhas[i]);
            
            if(validar == true){
                printf("senha valida!\n");
            }else{
                printf("senha invalida!\n");
            }
            
            i++;
        }
    }
    
    char senhas[4][5] = {"1234","4321","1111","1234"};
    verificaSenha(senhas);
    
    char senhas2[2][5] = {"0000","0000"};
    verificaSenha(senhas2);
    
    char senhas3[3][5] = {"2001","2000","2001"};
    verificaSenha(senhas3);

    return 0;
}
