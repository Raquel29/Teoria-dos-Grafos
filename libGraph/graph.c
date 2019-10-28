#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "matAdj.h"
#include "listAdj.h"
void inicializa_grafo(grafo **g, int resp){
  FILE *arq =fopen("grafo.txt","r");
  if(arq==NULL){
    printf("Ocorreu um erro ao abrir o arquivo!\n");
  }
  (*g) = malloc(sizeof(grafo));
  fscanf(arq,"%d",&((*g)->num_vertices));

  if(resp==1){
    (*g)->matAdj =preenche_matriz((*g)->num_vertices,&((*g)->num_arestas),arq);
    (*g)->grau_vertices = contabiliza_grausMat((*g)->matAdj,(*g)->num_vertices);
  }else if(resp==2){
    (*g)->listAdj =preenche_lista((*g)->num_vertices,&((*g)->num_arestas),arq);
    (*g)->grau_vertices = contabiliza_grausList((*g)->listAdj,(*g)->num_vertices);
  }
  fclose(arq);
}
void info_grafo(grafo **g){
  FILE *arq =fopen("saida.txt","w");
  int i;
  if(arq==NULL){
    printf("Ocorreu um erro ao criar o arquivo de saida!\n");
  }
  fprintf(arq,"# n = %d\n",(*g)->num_vertices);
  fprintf(arq,"# m = %d\n",(*g)->num_arestas);
  for(i=0;i<(*g)->num_vertices;i++){
    fprintf(arq,"%d %d\n",(i+1),(*g)->grau_vertices[i]);
  }
  fclose(arq);
}
