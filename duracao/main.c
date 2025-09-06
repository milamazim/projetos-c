#include <stdio.h>

int main() {

  int horas, minutos, totalSegundos, segundosRestantes, segundos;

  printf("Digite a duracao em segundos: ");
  scanf("%d", &totalSegundos);

  horas = totalSegundos / 3600;
  segundosRestantes = totalSegundos % 3600;
  minutos = segundosRestantes / 60;
  segundos = segundosRestantes % 60;

  printf("%d:%d:%d\n", horas, minutos, segundos);

  return 0;
}