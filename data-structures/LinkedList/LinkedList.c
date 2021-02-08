#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int value;
	struct Node *next;

}NODE;
//Nó básico para criação da lista

void insert(int newValue,NODE *list){
	NODE *newNode = malloc(sizeof(NODE));
	//Alocação de memória para novo nó
	
	newNode->value = newValue;
	//Definindo o valor do novo nó
	newNode->next = list->next;
	//Definindo o proximo item do nó como o primeiro elemento da lista
	
	list->next = newNode;
	//Define o começo da lista como o novo nó
	
}
//Função de inserção


void printList(NODE *list){
	NODE *auxList = list->next;
	//Pula a cabeça da lista
	
	while(auxList != NULL){
		printf("%d\n",auxList->value);
		
		auxList = auxList->next;
	} 
	//Enquanto não atinge o ultimo elemento definido como NULL printa a lista
	
}

int main(){
	
	NODE *initialNode = malloc(sizeof(NODE));
	initialNode->next = NULL;
	
	insert(10,initialNode);
	insert(11,initialNode);
	insert(12,initialNode);
	printList(initialNode); 
	
	
	return 1;
}
