#include <stdio.h>
int matrizdiagonal(int M,int N,int matrizq[M+1][N+1]){
  int zero = 0;
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      if (i!=j){
        zero = matrizq[i][j];
      }
      if (zero != 0){
        return 0;
      }
    }
  }
  return 1;
}
int main(void) {
  int ij;
  int back;
  int elemento;
  printf("Digite o tamanho da matriz quadrada: \n");
  scanf("%d", &ij);
  int matrizq[ij+1][ij+1];
  for (int i=0; i<ij; i++){
    for(int j=0; j<ij; j++){
      printf("digite o elemento da posição %d e %d \n", i, j);
      scanf("%d",&elemento);
      matrizq[i][j] = elemento;
    }
  }
  back = matrizdiagonal(ij,ij,matrizq);
  if (back == 0){
    printf("False");
  }
  else{
    printf("true");
  }
  return 0;
}