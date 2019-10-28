#ifndef LISTADJ
#define LISTADJ
typedef struct listNode{
  int vertex;
  struct listNode *next;
  struct listNode *prev;
}listNode;
typedef listNode * nodeIterator;
typedef struct listVertex{
  int degree;
  listNode *head;
  listNode *tail;
}listVertex;
listVertex *preenche_lista(int n_v,int *n_e, FILE *arq);
listVertex *createVectorList(int n_v);
void newNode(listVertex *vetor,int v1,int v2);
int *contabiliza_grausList(listVertex *vetor,int n);
void imprimeListAdj(listVertex *vetor,int n);
#endif
