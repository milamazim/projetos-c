#include <stdio.h>

int main() {

  int M, N;

  printf("Qual a quantidade de linhas da matriz? ");
  scanf("%d", &M);
  printf("Qual a quantidade de colunas da matriz? ");
  scanf("%d", &N);

  double mat[M][N];
  double soma[M];

  if (M <= 10 && N <= 10) {
    for (int i=0; i < M; i++) {
      printf("Digite os elementos da %da. linha: \n", i+1);
      for (int j=0; j < N; j++) {        
        scanf("%lf", &mat[i][j]);
      }   
    }
    
    printf("VETOR GERADO: \n");
    for (int i=0; i < M; i++) {
      for (int j=0; j < N; j++) {
        soma[i] += mat[i][j];        
      }
      printf("%.1lf\n", soma[i]);      
    }

  }
  else {
    printf("Limite 10 linhas 10 colunas");
  }
  
  return 0;
}