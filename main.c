#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char verifyAlphabet(int criptValue,char letter,int rotation){
	char alphabet[26][2] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	char aux[] = {letter};
	for(int i=0; i<26;i++){
		if(strcmp(alphabet[i],aux)==0){
			int alphPosit = i;
			if(criptValue == 3){
			    int positRotation = alphPosit+rotation;
			    if(positRotation > 25){
			        //Entra no if caso o valor estoure o maximo do vetor;
			        int newValue = (positRotation-25)-1;
			        printf("%s",alphabet[newValue]);
			    }else{
			        printf("%s",alphabet[positRotation]);
			    }
			}else{
			    int positRotation = alphPosit-rotation;
			    if(positRotation < 0){
			        //Entra no if caso o valor estoure o minimo do vetor;
			        int newValue = (25+positRotation)+1;
			        printf("%s",alphabet[newValue]);
			    }else{
			        printf("%s",alphabet[positRotation]);
			    }
			}
		}
	}
}

char encrypt(char msg[500],int rotation){
    int criptValue = 3;
	for(int i=0; i<strlen(msg); i++){
	        verifyAlphabet(criptValue,msg[i],rotation);
	}
}

char decrypt(char msg[500],int rotation){
    int criptValue = 4;
	for(int i=0; i<strlen(msg); i++){
	        verifyAlphabet(criptValue,msg[i],rotation);
	}
}

int main(){
	int operOption;
	char message[500]={""};
	int rotationValue;
	
	printf("Enter 1 to encrypt or 2 to decrypt:\n");
	printf("Digite 1 para encriptar ou 2 para descriptar:\t");
	scanf("%d",&operOption);
	
	printf("\nEnter the message to be operated (JUST UPPERCASE)(NO SPACES):\n");
	printf("Digite a mensagem a ser operada (SOMENTE LETRA MAIUSCULAS)(SEM ESPACOS):\n");
	scanf("%s",message);
	
	printf("\nEnter the rotation value:\n");
	printf("Digite o valor de rotacao:\t");
	scanf("%d",&rotationValue);
	
	if(operOption == 1){
		printf("\n********ENCRYPTED MESSAGE********\n");
		encrypt(message,rotationValue);
	}else{
		printf("\n********DECRYPTED MESSAGE********\n");
		decrypt(message,rotationValue);
	}
	
	getchar();
}