/*
*Instituto Federal de Educação, Ciência e Tecnologia de Brasília.
*Autoras: Carlos Eduardo Pereira Santana; Danyelle da Silva Oliveira Angelo e Raquel Pinheiro Costa
*
*Trabalho desenvolvido como requisito de avaliação parcial da disciplina de Teoria dos Grafos, ministrada
*pelo professor Raimundo Cláudios Vasconcelos no segundo semestre de 2019.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "libGraph/graph.h"


int main(void){
  grafo *g;
  int resp;
  setlocale(LC_ALL, "Portuguese");
  while(1){
    printf("\t------- Menu -------\n");
    printf("0 - Encerrar programa\n1 - Matriz de adjacência\n2 - Lista de adjacência\n3 - Busca em largura\n4 - Busca em Profundidade\n5 - Verificar componentes conexos\n\n");
    printf("---------- Opção:");
    scanf("%d",&resp);
    if(resp==0){
      printf("\n\n\t---------- Sessão encerrada! ----------\n");
      break;
    }
    else if(resp==1 || resp==2){
        initializeGraph(&g,resp);
        infoGraph(&g);
        break;
    }else{
      printf("Opção inválida!\n");
    }
    printf("\n\n\n");
  }

}
