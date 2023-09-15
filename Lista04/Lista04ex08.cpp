#include <iostream>
int interseccao (int B[], int bn,int A[], int am){
  int count = -1;
  int interseccao[100];
  if(bn >= am){
    for (int i=0; i<bn; i++){
      for (int j=0; j<am; j++){
        if(B[i] == A[j]){
          count++;
          interseccao[count] = B[i];
        }
      }
    }
  }
  else{
    for (int i=0; i<am; i++){
      for (int j=0; j<bn; j++){
        if(A[i] == B[j]){
          count++;
          interseccao[count] = A[i];
        }
      }
    }
  }
  printf("A[]B = {");
  if (count != -1){
    for (int i=0; i<count +1; i++){
      printf(" %d, ", interseccao[i]);
    }
  }
  printf("}");
  return 0;
}
int main() {
  int bn, x, e, am;
  int y;
  printf("digite quantos elementos o vetor 1 terá: ");
  scanf("%d", &bn);
  int B[bn];
  for (int i = 0; i<bn; i++){
    printf("N no vetor: ");
    scanf("%d", &x);
    B[i] = x;
  }
  x = 0;
  printf("digite quantos elementos o vetor 2 terá: ");
  scanf("%d", &am);
  int A[am];
  for (int i = 0; i<am; i++){
    printf("N no vetor: ");
    scanf("%d", &x);
    A[i] = x;
  }
  interseccao(B, bn, A, am);
  return 0;
}