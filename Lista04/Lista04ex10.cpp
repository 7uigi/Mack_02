#include <iostream>
int diferenca (int B[], int bn,int A[], int am){
  int Bback[bn];
  int Aback[am];
  if(bn >= am){
    for (int i=0; i<bn; i++){
      Bback[i] = B[i];
      for (int j=0; j<am; j++){
        if(B[i] == A[j]){
          A[j] = 0;
        }
      }
    }
  }
  else{
    for (int i=0; i<am; i++){
      Aback[i] = A[i];
      for (int j=0; j<bn; j++){
        if(A[i] == B[j] ){
           B[j] = 0;
        }
      }
    }
  }
  if (bn >= am){
    printf("A[]B = {");
    for (int i=0; i<bn; i++){
      printf(" %d, ", Bback[i]);
    }
    for (int i=0; i<am; i++){
      if (A[i] != 0){
        printf(" %d, ", A[i]);
      }
    }
    printf("}");
  }
  else{
    printf("B[]A = {");
    for (int i=0; i<am; i++){
      printf(" %d, ", Aback[i]);
    }
    for (int i=0; i<bn; i++){
      if (B[i] != 0){
        printf(" %d, ", B[i]);
      }
    } 
    printf("}");
  }
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
  diferenca(B, bn, A, am);
  return 0;
}