/*
Algoritmo e Programação Estruturada
Professor(a): João Robson
Estudante: Douglas Souza de Lima
Lista avaliativa 1 - Questão 1
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    
    bool copaDoMundo(int ano)
    {
        int copaDoMundo[22] = {1930,1934,1938,1950,1954,1958,1962,1966,1970,1974,1978,1982,1986,1990,1994,1998,2002,2006,2010,2014,2018,2022};
    	int i = 0;
    
        for(i;i < 22;i++)
        {
            if(ano == copaDoMundo[i])
            {
                return true;
            }
        };
        
            return false;
    }
    
    bool jogosOlimpicos(int ano)
    {
        int jogosOlimpicos[29] = {1896,1900,1904,1908,1912,1920,1924,1928,1932,1936,1948,1952,1956,1960,1964,1968,1972,1976,1980,1984,1988,1992,1996,2000,2004,2008,2012,2016,2020};
    	int i = 0;
    
        for(i;i < 29;i++)
        {
            if(ano == jogosOlimpicos[i])
            {
                return true;
            }
        };
        
            return false;
    }

    void verificaAno(int ano)
    {
        if(copaDoMundo(ano))
        {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.",ano);
            printf("\n");
        }else if(jogosOlimpicos(ano))
        {
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.",ano);
            printf("\n");
        }else{
            printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.",ano);
            printf("\n");
        }
    }
    
    int ano[3] = {1800,1934,2016};

    verificaAno(ano[0]);
    verificaAno(ano[1]);
    verificaAno(ano[2]);

    return 0;
}
