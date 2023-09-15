#include <iostream>
int busca_unicos (int v[], int n){
  int unicos = n;
  for (int i=0; i<n; i++){
    for (int j=i+1; j<n; j++){
      if(v[i] == v[j] and v[i] != -1){
        unicos--;
        v[j] = -1;
      }
    }
  }
  return unicos;
}
int main() {
  int n, x, e;
  int y;
  printf("digite quantos elementos o vetor terá: ");
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i<n; i++){
    printf("N no vetor: ");
    scanf("%d", &x);
    v[i] = x;
  }
  y = busca_unicos(v, n);
  printf("A quantidade de elementos unicos neste vetor são: %d", y);
  return 0;
}