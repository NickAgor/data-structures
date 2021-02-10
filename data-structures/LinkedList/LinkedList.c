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


void print(NODE *list){
	NODE *auxList = list->next;
	//Pula a cabeça da lista
	
	while(auxList != NULL){
		printf("%d\n",auxList->value);
		
		auxList = auxList->next;
	} 
	//Enquanto não atinge o ultimo elemento definido como NULL printa a lista
	
}

void delete(NODE *list){
	NODE *auxList = list->next;
	//Pula a cabeça da lista
	list->next = auxList->next;
	//Define o primeiro item da lista como o segundo item
	free(auxList);
	//Deleta o primeiro item da lista da memória
	
	
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
