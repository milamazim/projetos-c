#include <stdio.h>

int main() {

  int N, negativos = 0;

  printf("Qual a ordem da matriz? ");
  scanf("%d", &N);

  int vet[N][N];  
  
  if (N <= 10) {
    for (int i=0; i < N;i++) {
      for (int j=0; j < N; j++) {
        printf("Elemento [%d][%d]: ", i, j);
        scanf("%d", &vet[i][j]);
      }      
    }
    
    printf("DIAGONAL PRINCIPAL: \n");

    for (int i=0; i < N;i++) {
      for (int j=0; j < N; j++) {
        if (i == j) {
          printf("%d ", vet[i][j]); 
        }
        if (vet[i][j] < 0) {
          negativos += 1;
        }
      }
    }    
    
    printf("\nQUANTIDADE DE NEGATIVOS: %d", negativos);
    
  }

  return 0;
}