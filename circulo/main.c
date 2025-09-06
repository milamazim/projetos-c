#include <stdio.h>
#define _USE_MATH_DEFINES // Necessário para M_PI em alguns compiladores
#include <math.h>

int main() {

  double raio, area;

  printf("Digite o valor do raio do circulo: ");
  scanf("%lf", &raio);

  area = M_PI * pow(raio, 2);

  printf("AREA = %.3lf", area);

  return 0;
}