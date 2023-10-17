#include <stdio.h>

int main(void) {
  int ij;
  int traco = 0;
  int back;
  int elemento;
  printf("Digite o tamanho da matriz quadrada: \n");
  scanf("%d", &ij);
  int passo = ij;
  int matrizq[ij+1][ij+1];
  for (int i=0; i<ij; i++){
    for(int j=0; j<ij; j++){
      printf("digite o elemento da posição %d e %d \n", i, j);
      scanf("%d",&elemento);
      matrizq[i][j] = elemento;
    }
  }
  for (int a=0; a<ij; a++){
    passo--;
    back = matrizq[a][passo];
    traco = back + traco;
  }
  printf("O traço secundario da matriz quadrada é: %d", traco);
  return 0;
}