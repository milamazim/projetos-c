#include <stdio.h>

int main() {

  double preco, recebido, troco;
  int quantidade;

  printf("Preço unitário do produto: ");
  scanf("%lf", &preco);
  printf("Quantidade comprada: ");
  scanf("%d", &quantidade);
  printf("Dinheiro recebido: ");
  scanf("%lf", &recebido);

  troco = recebido - (preco * quantidade);

  printf("TROCO = %.2lf", troco);

  return 0;

}