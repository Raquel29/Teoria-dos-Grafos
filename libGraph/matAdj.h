#ifndef MATADJ
#define MATADJ
int **aloca_matriz(int n);
int **preenche_matriz(int n_v,int *n_e, FILE *arq);
int *contabiliza_grausMat(int **matriz,int n);
void imprimeMatAdj(int **matriz,int n);
#endif
