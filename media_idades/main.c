#include <stdio.h>

int main () {

  int x, qtd;
  double soma, media;

  printf("Digite as idades: \n");
  scanf("%d", &x);
  soma = x;
  qtd = 1;

  if (x < 0) {
    printf("IMPOSSIVEL CALCULAR");
  }
  else {
    while (x >= 0) {
      scanf("%d", &x);      
      if (x >= 0) {
        soma += x;
        qtd += 1;
      }
    }
    media = soma / qtd;
    printf("MEDIA = %.2lf\n", media);
  }  
  
  return 0;
}