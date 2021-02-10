#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int value;
	struct Node *next;

}NODE;
//N� b�sico para cria��o da lista

void insert(int newValue,NODE *list){
	NODE *newNode = malloc(sizeof(NODE));
	//Aloca��o de mem�ria para novo n�
	
	newNode->value = newValue;
	//Definindo o valor do novo n�
	newNode->next = list->next;
	//Definindo o proximo item do n� como o primeiro elemento da lista
	
	list->next = newNode;
	//Define o come�o da lista como o novo n�
	
}
//Fun��o de inser��o


void print(NODE *list){
	NODE *auxList = list->next;
	//Pula a cabe�a da lista
	
	while(auxList != NULL){
		printf("%d\n",auxList->value);
		
		auxList = auxList->next;
	} 
	//Enquanto n�o atinge o ultimo elemento definido como NULL printa a lista
	
}

void delete(NODE *list){
	NODE *auxList = list->next;
	//Pula a cabe�a da lista
	list->next = auxList->next;
	//Define o primeiro item da lista como o segundo item
	free(auxList);
	//Deleta o primeiro item da lista da mem�ria
	
	
}

int main(){
	
	NODE *initialNode = malloc(sizeof(NODE));
	initialNode->next = NULL;
	
	insert(10,initialNode);
	insert(11,initialNode);
	insert(12,initialNode);
	delete(initialNode);
	print(initialNode); 
	
	
	return 1;
}
