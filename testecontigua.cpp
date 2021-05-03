#include <stdio.h>
#include "pilha.h"
#include "pilha_contigua.c"
#include "time.h"

Pilha* p = pilha_criar();

void pilha_testeempilhar(){

  int i;

  int tamVetor = 10000000;
  for ( i = 0; i < tamVetor; i++ ) {
    pilha_empilhar(p,i);
  }
}

void pilha_testedesempilhar(){

  TipoElemento elemaux;

  int tamVetor = 10000000,i;
  for ( i = 0; i < tamVetor; i++ ) {
    pilha_desempilhar(p,&elemaux);
  }
}


int main(){
	
	clock_t tempo;
	
	tempo = clock();
	
	pilha_testeempilhar();
	printf("Tempo Empilhar: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);
	
    tempo = clock();

	pilha_testedesempilhar();
	printf("\nTempo Desempilhar: %f",(clock() - tempo)/(double)CLOCKS_PER_SEC);
	//pilha_imprimir(p);
	pilha_destruir(p);
	
	return 0;
}

