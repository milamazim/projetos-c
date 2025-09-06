#include <stdio.h>

int main() {

  int x, y, inicio, fim, soma_impares = 0;

  printf("Digite dois números: \n");
  scanf("%d", &x);
  scanf("%d", &y);

  if (x < y) {
    inicio = x;
    fim = y;
  }
  else {
    inicio = y;
    fim = x;
  }

  for (int i=inicio; i < fim; i++) {
    if (i % 2 != 0 && i > inicio) {
      soma_impares += i;
    }
  }

  printf("SOMA DOS IMPARES = %d", soma_impares);

  return 0;
}