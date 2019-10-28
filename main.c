#include <stdio.h>
#include <stdlib.h>
#include "libGraph/graph.h"


int main(void){
  grafo *g;
  int resp;
  printf("Digite 1 para matriz de adjacência e 2 para lista de adjacência:");
  scanf("%d",&resp);
  inicializa_grafo(&g,resp);
  info_grafo(&g);
}
