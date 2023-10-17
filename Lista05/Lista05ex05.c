#include <stdio.h>
void transposta(int M,int N,int matrizA[M+1][N+1],int matrizB[M+1][N+1]){
  int matrizC[M+1][N+1];
  for (int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
  for (int i=0; i<M; i++){
    printf("\n");
    for(int j=0; j<N; j++){
      printf("%d ", matrizC[i][j]);
    }
  }
}
int main(void) {
  int M;
  int N;
  int back;
  int elemento;
  printf("Digite o tamanho de linhas da matriz: \n");
  scanf("%d", &M);
  printf("Digite o tamanho de colunas da matriz: \n");
  scanf("%d", &N);
  int matrizA[M+1][N+1];
  int matrizB[M+1][N+1];
  printf("Matriz A: \n");
  for (int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      printf("digite o elemento da posição %d e %d \n", i, j);
      scanf("%d",&elemento);
      matrizA[i][j] = elemento;
    }
  }
  printf("Matriz B: \n");
  for (int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      printf("digite o elemento da posição %d e %d \n", i, j);
      scanf("%d",&elemento);
      matrizB[i][j] = elemento;
    }
  }
  transposta(M,N,matrizA,matrizB);
  return 0;
}