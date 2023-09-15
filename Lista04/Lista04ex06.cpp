#include <iostream>
int busca_qtde(int v[], int n, int e){
  int r = -1;
  int count = 0;
  for (int i = 0; i<n; i++){
    if (v[i] == e){
      count++;
    }
  }
  return count;   
}
int main() {
  int n, x, e;
  int y;
  printf("digite quantos elementos o vetor terá: ");
  scanf("%d", &n);
  int  v[n];
  for (int i = 0; i<n; i++){
    printf("N no vetor: ");
    scanf("%d", &x);
    v[i] = x;
  } 
  printf("digite um elementos presente no vetor: ");
  scanf("%d", &e);
  y = busca_qtde(v, n, e);
  printf("A quantidade de aparições do elemento e são: %d", y);
  return 0;
}