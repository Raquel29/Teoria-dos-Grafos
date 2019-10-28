#ifndef GRAPH
#define GRAPH
#include "listAdj.h"
typedef struct grafo{
  int num_vertices;
  int num_arestas;
  int *grau_vertices;
  int **matAdj;
  listVertex *listAdj;
}grafo;
void inicializa_grafo(grafo **g,int resp);
void info_grafo(grafo **g);
#endif
