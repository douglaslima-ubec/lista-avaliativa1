/*
Algoritmo e Programação Estruturada
Professor(a): João Robson
Estudante: Douglas Souza de Lima
Lista avaliativa 1 - Questão 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

int main(){
    
    double aumento(double salario,char nivel){
        
        switch(nivel){
            case 'a':
                salario *= 1.05;
                break;
            case 'b':
                salario *= 1.07;
                break;
            case 'c':
                salario *= 1.08;
                break;
        }
        return salario;
    }
    
    char nivel = 'a';
    double salario = 3000;
    printf("R$ %.2f\n",aumento(salario,nivel));
    
    nivel = 'b';
    salario = 2450.1;
    printf("R$ %.2f\n",aumento(salario,nivel));
    
    nivel = 'c';
    salario = 2100.5;
    printf("R$ %.2f\n",aumento(salario,nivel));

    return 0;
}
