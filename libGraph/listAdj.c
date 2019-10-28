#include <stdio.h>
#include <stdlib.h>
#include "listAdj.h"
listVertex *preenche_lista(int n_v,int *n_e, FILE *arq){
  int v1,v2;
  listVertex *vetor=createVectorList(n_v);
  while(1){
    if(fscanf(arq,"%d %d",&v1,&v2)!=EOF){
      (*n_e)++;//número de arestas
      if((v1<=n_v && v2<=n_v) && (v1>0 && v2>0)){
        newNode(vetor,v1,v2);
      }
      else{
        printf("Os vertices informados no arquivo nao existem!\n");
      }
    }
    else{
      break;
    }
  }
  return vetor;
}
listVertex *createVectorList(int n_v){
  listVertex *vetor=calloc(n_v,sizeof(listVertex));
  int i;
  for(i=0;i<n_v;i++){
    vetor[i].degree=0;
    vetor[i].head=NULL;
    vetor[i].tail=NULL;
  }
  return vetor;
}
void newNode(listVertex *vetor,int v1,int v2){
  listNode *nodeV2= malloc(sizeof(listNode));
  listNode *nodeV1= malloc(sizeof(listNode));
  nodeIterator aux;
  int i;
  nodeV2->vertex = v2;
  nodeV1->vertex = v1;

  //vértice 1 se liga ao 2
  if(vetor[v1-1].degree==0){//está 'lista' ainda não possui cabeça ou calda
    vetor[v1-1].head=nodeV2;
    nodeV1->next=NULL;
    nodeV1->prev=NULL;
  }else{
    aux=vetor[v1-1].tail;/*a lista já tem elementos, adicionaremos o novo elemento aṕos a cauda autal*/
    aux->next = nodeV2;
    nodeV2->prev = aux;
    nodeV2->next=NULL;
  }
  vetor[v1-1].tail=nodeV2;//a nova cauda é o último elemento
  vetor[v1-1].degree+=1;
  //vértice 2 se liga ao 1
  if(vetor[v2-1].degree==0){//está 'lista' ainda não possui cabeça ou calda
    vetor[v2-1].head=nodeV1;
    nodeV1->next=NULL;
    nodeV1->prev=NULL;
  }else{
    aux=vetor[v2-1].tail;/*a lista já tem elementos, adicionaremos o novo elemento aṕos a cauda autal*/
    aux->next = nodeV1;
    nodeV1->prev = aux;
    nodeV1->next=NULL;
  }
  vetor[v2-1].tail=nodeV1;//a nova cauda é o último elemento
  vetor[v2-1].degree+=1;
}
void imprimeListAdj(listVertex *vetor,int n){
  int i;
  for(i=0;i<n;i++){
    printf("Vertex: %d\n",i+1);
    printf("Vertex incidentes: ");
    nodeIterator aux = vetor[i].head;
    while(aux!=NULL){
      printf("%d ",aux->vertex);
      aux=aux->next;
    }
    printf("\n---------\n");
  }
}
int *contabiliza_grausList(listVertex *vetor,int n){
  int i;
  int *graus= calloc(n,sizeof(int));
  for(i=0;i<n;i++){
    graus[i] = vetor[i].degree;
  }
  return graus;
}
