#include <stdio.h>
#include "pilha.h"
#include "pilha_contigua.c"
#include "time.h"

Pilha* p = pilha_criar();

void pilha_testeempilhar(int tamVetor){

  int i;

  for ( i = 0; i < tamVetor; i++ ) {
    pilha_empilhar(p,i);
  }
}

void pilha_testedesempilhar(int tamVetor){

  TipoElemento elemaux;

  int i;
  for ( i = 0; i < tamVetor; i++ ) {
    pilha_desempilhar(p,&elemaux);
  }
}


int main(){
	
	clock_t tempo;
	
	tempo = clock();
	
	pilha_testeempilhar(10000);
	printf("Tempo Empilhar 10000: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);
	
    tempo = clock();

	pilha_testedesempilhar(10000);
	printf("\nTempo Desempilhar 10000: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);

	tempo = clock();
	
	pilha_testeempilhar(100000);
	printf("\nTempo Empilhar 100000: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);
	
    tempo = clock();

	pilha_testedesempilhar(100000);
	printf("\nTempo Desempilhar 100000: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);


	tempo = clock();
	
	pilha_testeempilhar(1000000);
	printf("\nTempo Empilhar 1000000: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);
	
    tempo = clock();

	pilha_testedesempilhar(1000000);
	printf("\nTempo Desempilhar 1000000: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);
	
	pilha_destruir(p);
	
	return 0;
}

