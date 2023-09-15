#include<iostream>
bool contem (int v[], int n, int e){
  bool status = false;
  for (int i = 0; i<n; i++){
    if (v[i] == e){
      status = true;
    }
  } 
  return status;
}
int main() {
  int n, x, e;
  bool y;
  printf("digite quantos elementos o vetor terá: ");
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i<n; i++){
    printf("N no vetor: ");
    scanf("%d", &x);
    v[i] = x;
  } 
 
  printf("digite um elemento presente no vetor: ");
  scanf("%d", &e);
  y = contem(v, n, e);
  if (y == true){
    printf("encontrou");
      }
  else{
    printf("Não encontrou");
  }
  return 0;
}