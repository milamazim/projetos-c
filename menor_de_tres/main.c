#include <stdio.h>

int main() {

  int n1, n2, n3, menor;

  printf("Primeiro valor: ");
  scanf("%d", &n1);

  printf("Segundo valor: ");
  scanf("%d", &n2);

  printf("Terceiro valor: ");
  scanf("%d", &n3);

  if (n1 < n2) {
    menor = n1;
  }
  else if (n3 < n2) {
    menor = n3;
  }
  else {
    menor = n2;
  }

  printf("MENOR = %d", menor);

  return 0;
}