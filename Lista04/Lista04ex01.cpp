#include <iostream>
bool crescente (int v[], int n){
  int menor, maior;
  for (int i = 0; i<n -1; i++){
    maior = v[i+1];
    menor = v[i];
    if (menor > maior){
      bool status = false;
      return status;
    }
  } 
  bool status = true;
  return status;
}
int main() {
  int n, x;
  bool y;
  printf("digite quantos elementos o vetor terá: ");
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i<n; i++){
    printf("N no vetor: ");
    scanf("%d", &x);
    v[i] = x;
  } 
  y = crescente(v, n);
  if(y == 1){
    printf("Está na ordem.");
  }
  else{
    printf("Não está na ordem.");
  }
  return 0;
}