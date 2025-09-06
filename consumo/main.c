#include <stdio.h>

int main() {

  int distancia;
  double combustivel, consumo;

  printf("Distancia percorrida: ");
  scanf("%d", &distancia);

  printf("Combustível gasto: ");
  scanf("%lf", &combustivel);

  consumo = distancia / combustivel;

  printf("Consumo medio = %.3lf", consumo);

  return 0;
}