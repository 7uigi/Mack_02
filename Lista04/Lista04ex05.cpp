#include <iostream>
int busca_ultimo (int v[], int n, int e){
  int r = -1;
  int count = -1;
  for (int i = 0; i<n; i++){
    count++;
    if (v[i] == e){
      r = count;
    }
  }
  return r;
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
  y = busca_ultimo(v, n, e);
  if (y != -1){
    printf("A ultima casa onde o elemento e foi encontrado é: %d", y);
  }
  else{
    printf("%d \n", y);
    printf("O elemento %d não está presente no vetor.", e);
  }
  return 0;
}