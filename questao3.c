#include <stdio.h>

int main(){
	/*
	void verificaSenha(char senhaCadastrada,char senhas[]){
		
		printf("Senha cadastrada: %c\n",senhaCadastrada);
		
		int i = 0;
		
		int sizeSenhas = (sizeof(senhas)/sizeof(senhas[0]));
		
		for(i;i <= sizeSenhas;i++){
			
			if(senhas[i]==senhaCadastrada){
				printf("senha valida!\n",senhas[i]);
				break;
			}else{
				printf("senha invalida!\n",senhas[i]);
			}
			
		}
		
	}*/
	
	char senhaCadastrada = "1234";
	char senhas[] = {"4","1111","1234"};
	//verificaSenha(senhaCadastrada,senhas);
	
	return 0;
}
