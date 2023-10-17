#include <stdio.h>
int main(void){
  int ij;
  int back;
  int elemento;
  int soma = 0;
  printf("Digite o tamanho de elementos da matriz quadrada: \n");
  scanf("%d", &ij);
  int matrizA[ij+1][ij+1];
  int matrizB[ij+1][1];
  printf("Matriz A: \n");
  for (int i=0; i<ij; i++){
    for(int j=0; j<ij; j++){
      printf("digite o elemento da posição %d e %d \n", i, j);
      scanf("%d",&elemento);
      matrizA[i][j] = elemento;
    }
  }
  printf("Vetor B: \n");
  for (int i=0; i<ij; i++){
    for(int j=0; j<1; j++){
      printf("digite o elemento da posição %d e %d \n", i, j);
      scanf("%d",&elemento);
      matrizB[i][j] = elemento;
    }
  }
  int matrizC[ij+1][1];
  for (int i=0; i<ij; i++){
    soma = 0;
    for(int j=0; j<ij; j++){
      back = matrizA[i][j] * matrizB[i][0];
      soma = back + soma;
      matrizC[i][0] = soma; 
    }
  }
  for (int i=0; i<ij; i++){
    printf("\n");
    for(int j=0; j<1; j++){
      printf("%d ", matrizC[i][j]);
    }
  }
  return 0;
}