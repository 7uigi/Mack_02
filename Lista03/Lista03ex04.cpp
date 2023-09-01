#include <iostream>
int bo(int N, int D){
  int resp;
  resp = N % D;
  if (resp == 0 or D == 1){
    bool status = true;
    return status;
  }
  else{
    bool status = false;
    return status;
  }
  return 0;
}
int di(int M){
  int divisoresx = 1;
  int max = M/2 + 1;
  int quantidades = 1;
  while (divisoresx <= max){
    quantidades += bo(M, divisoresx);
    divisoresx++;    
  }
  return quantidades;
}
int main() {
  int r, i;
  printf("Digite um numero inteiro: ");
  scanf("%d", &i);
  r = di(i);
  printf("%d", r);
}