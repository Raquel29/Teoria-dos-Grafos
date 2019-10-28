/*
*Instituto Federal de Educação, Ciência e Tecnologia de Brasília.
*Autoras: Carlos Eduardo Pereira Santana; Danyelle da Silva Oliveira Angelo e Raquel Pinheiro Costa
*
*Trabalho desenvolvido como requisito de avaliação parcial da disciplina de Teoria dos Grafos, ministrada
*pelo professor Raimundo Cláudios Vasconcelos no segundo semestre de 2019.
*/
#include<stdio.h>
#include<stdlib.h>
#include "listAdj.h"
#include "graph.h"


// buca em profunidade lista de adjacencia
void graph_dfs(grafo **g){
	int aux = 0;
	busca *num;
	listVertex *vertex;

	(*num) = malloc(sizeof(busca));

	for ( vertex = 0; vertex < g->vertex; vertex++){
		num[vertex] = -1;

		for(vertex=0; vretex< g->vertex; vertex++){
			if(num[v] == -1){
				dfs(g, v, n_e); 
			}
		}
	}	

}


void dfs(grafo **g, listVertex vertex, int n_e){
	int aux = 0;


	num[v] = aux++;

		for(n_e =g->listAdj[vertex]; n_e != NULL; n_e = n_e->next){
			prev = n_e->prev ;
			if(num[prev] == -1){
				dfs(g,prev ,n_e);
			}
		}
}

//busca em lagura lista de adjacencia
 // v1 é uma vertice raiz
void graph_bfs(grafo **g, listVertex v1){
	 int aux =0;


	 (*num) = malloc(sizeof(busca));
	 (*pais) = malloc(sizeof(busca));

	 for (vertex = 0; vertex < g->vertex ; vertex++){
	 num[vertex]= pais[vertex] = -1;
	 	creatVectorList(g-.vertex);
	 	num [v1]= aux++;
	 	pais[v1] = v1;
	 	vetor[tail] =v1 ;
	 }

	 	while(!(head == tail)){
	 		vertex = vetor[head++];
	 		for (n_e = g->listAdj[vertex]; n_e!=NULL; n_e->next ){
	 			if ( num[n_e->prev]== -1 ){
	 				num[n_e->prev] = aux++;
	 				pais[n_e->prev] = vertex;
	 				vetor[tail] = n_e->prev;
	 			}
	 		}

	 	}
	free(vetor); 	
}

	

