#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char verifyAlphabet(char letter,int rotation){
	char alphabet[26][2] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	char aux[] = {letter};
	for(int i=0; i<26;i++){
		if(strcmp(alphabet[i],aux)==0){
			printf("Posicao da letra no alfabto: %d\n",i);
		}
	}
}

char encrypt(char msg[500],int rotation){
	for(int i=0; i<strlen(msg); i++){
		verifyAlphabet(msg[i],rotation);
	}
}

char decrypt(char msg[500],int rotation){
	printf("Funcao decrypt: %s\n",msg);
}

int main(){
	int operOption;
	char message[500]={""};
	int rotationValue;
	
	printf("Enter 1 to encrypt or 2 to decrypt:\t");
	scanf("%d",&operOption);
	
	printf("\nEnter the message to be operated (JUST UPPERCASE):\n");
	scanf("%s",message);
	
	printf("\nEnter the rotation value:\t");
	scanf("%d",&rotationValue);
	
	if(operOption == 1){
		printf("\n********ENCRYPT********\n");
		encrypt(message,rotationValue);
	}else{
		printf("\n********DECRYPT********\n");
		decrypt(message,rotationValue);
	}
	
	return 0;
}
