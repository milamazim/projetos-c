#include <stdio.h>

int main() {

  int x, y;  
  
  printf("Digite dois números: \n");
  scanf("%d", &x);
  scanf("%d", &y);

  if (x > y) {
    printf("DECRESCENTE!\n");
  }
  else if (y > x){
    printf("CRESCENTE!\n");
  }

  while (x != y) {
    printf("Digite outros dois números: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y) {
      printf("DECRESCENTE!\n");
    }
    else if (y > x){
      printf("CRESCENTE!\n");
    }
  }

  return 0;
}