#include <iostream>
int vec(int v[]){
  int back = 0;
  int max = 4;
  for (int i = 0; i<2 ; i++){
    back = v[i];
    v[i] = v[max];
    v[max] = back;
    max--;
  }
  printf("O vetor v invertido é igual a [%d,%d,%d,%d,%d]",v[0],v[1],v[2],v[3],v[4]);
  return 0;
}
int main() {
  int v[5];
  int y;
  for (int i = 0; i<5 ; i++){
    printf("Digite 5 numeros: ");
    scanf("%d", &y);
    v[i] = y;
  }
  printf("O vetor v antes de ser invertido é igual a [%d,%d,%d,%d,%d]\n",v[0],v[1],v[2],v[3],v[4]);
  vec(v);
  return 0;
}