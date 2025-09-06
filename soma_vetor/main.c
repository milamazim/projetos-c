#include <stdio.h>

int main() {

  int N;
  double soma = 0, media;

  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &N);

  double vet[N];

  for(int i=0; i<N; i++) {
    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);    
  }

  printf("\nVALORES = ");    
  for(int i=0; i<N; i++) {
    printf("%.1lf  ", vet[i]);
    soma += vet[i];
  }

  media = soma / N;

  printf("\nSOMA = %.2lf", soma);
  printf("\nMEDIA = %.2lf", media);

  return 0;
}