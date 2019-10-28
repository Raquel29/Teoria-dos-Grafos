#ifndef GRAPH
#define GRAPH
#include "listAdj.h"
typedef struct grafo{
  int n_v;/*Número de vértices do nosso grafo, primeira linha do arquivo a ser lido*/
  int n_e;/*Número de arestas do nosso grafo, número de linhas lido aṕos a primeira linha (cada par de vértices é uma aresta)*/
  int *degree_v;/*Vetor onde o valor armazenado em cada posição indica o grau de cada vértice, cada vértice aqui é encarado como o índice do vetor, por exemplo o vértice 9 de um grafo é o índice 8 do nosso vetor (o vetor começa em zero).*/
  int **matAdj;/*Matriz de adjascência nxn (n=número de vértices). Sempre que o vértice 'a' tiver incidência sobre o vértice 'b', a posição a,b e b,a será setada como 1*/
  listVertex *listAdj;/*Vetor de listas, onde para cada posição do vetor existe uma lista com os vértices incidentes sobre aquela posição*/
}grafo;
/*
@brief: Abre o aqruivo a ser lido, aloca na memória um espaço para a estrutura grafo, ler e armazena o número de vértices do nosso grafo,
chama as funções que cria  lista de adjascência ou matriz de adjascência (de acordo com a opção escolhida pelo usuário).
@param g: ponteiro para o grafo alocado na memória
@param resp: armazena a opção escolhida pelo usuário, 1=gerar matriz de adjascência, 2=gerar lista de adjascência
*/
void initializeGraph(grafo **g,int resp);
/*
@brief: cria/abre o arquivo de saída, grava as informações do grafo (número de vértices, arestas e grau de cada vértice) no arquivo aberto.
@param: g ponteiro para o grafo analisado
*/
void infoGraph(grafo **g);
/**/
void isConnected(grafo **g);

#endif
