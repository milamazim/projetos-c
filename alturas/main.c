#include <stdio.h>
#include <string.h>

int main() {

  int N, soma_menor = 0;   
  double altura_media, percentual_menor, soma_alturas = 0;  

  printf("Quantas pessoas serao digitadas? ");
  scanf("%d", &N);

  char nomes[N][50];  
  int idades[N];
  double alturas[N];

  for (int i=0; i < N; i++) {
    printf("Dados da %da pessoa: ", i+1);
    
    printf("\nNome: ");
    fseek(stdin, 0, SEEK_END);    
    fgets(nomes[i], 50, stdin);
    
    printf("Idade: ");
    scanf("%d", &idades[i]);
    
    printf("Altura: ");
    scanf("%lf", &alturas[i]); 

    soma_alturas += alturas[i];
    
    if (idades[i] < 16) {
      soma_menor += 1;
    }

  }

  altura_media = soma_alturas / N;
  percentual_menor = (double) soma_menor / N * 100;

  printf("\nAltura média: %.2lf", altura_media);
  printf("\nPessoas com menos de 16 anos: %.1lf%%\n", percentual_menor);
  
  for (int i=0; i < N; i++) {
    if (idades[i] < 16) {
      printf("%s", nomes[i]);
    }        
  }

  return 0;
}