#include <stdio.h>
void transposta(int M,int N,int matrizq[M+1][N+1]){
  printf("A matriz transposta de %d e %d é: \n", N, M);
  for (int i = 0; i<N; i++){
    printf("\n");
    for (int j = 0; j<M; j++){
      printf ("%d",matrizq[j][i]);
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
  int matrizq[M+1][N+1];
  for (int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      printf("digite o elemento da posição %d e %d \n", i, j);
      scanf("%d",&elemento);
      matrizq[i][j] = elemento;
    }
  }
  transposta(M,N,matrizq);

  return 0;
}