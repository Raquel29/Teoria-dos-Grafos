/*
*Instituto Federal de Educação, Ciência e Tecnologia de Brasília.
*Autoras: Carlos Eduardo Pereira Santana; Danyelle da Silva Oliveira Angelo e Raquel Pinheiro Costa
*
*Trabalho desenvolvido como requisito de avaliação parcial da disciplina de Teoria dos Grafos, ministrada
*pelo professor Raimundo Cláudios Vasconcelos no segundo semestre de 2019.
*/
#ifndef MATADJ
#define MATADJ
/*
@brief: realiza a alocação de uma matriz nxn
@param n: número de vértices do grafo
@return: uma matriz nxn
*/
int **allocateMatrix(int n);
/*
@brief: lê cada linha do arquivo  fornecido como parametro e para cada linha lida, marca as correspondências na matriz de adjascência, essa correspondência
é indicada através do inteiro 1.
@param n_v: número de vértices do grafo
@param n_e: ponteiro para o número de arestas do grafo
@para arq: ponteiro para o arquivo que contém as informações do grafo
@return: matriz  de adjascência n_vxn_v  que indica os vértices incidentes sobre outro
*/
int **fillMatrix(int n_v,int *n_e,int *degree_v, FILE *arq);
/*
@brief: imprime matriz de adjascência (vértices incidentes sobre cada vértice)
@param matriz: matriz de adjascência que marca as incidências de graus
@param n: ordem da matriz
*/
void printMatAdj(int **matriz,int n);
#endif
