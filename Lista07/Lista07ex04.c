#include <stdio.h>
int mdc(a, b){
  int c;
  if (b == 0){
    return a;
  }
  if (a == 0){
    return b;
  }
  c = a % b;
  return mdc(b,c);
}
int main(void) {
  int a = -1;
  int b = -1;
  int r;
  while(a<0){
    printf("Digite um número: ");
    scanf("%d", &a);
  }
  while(b<0){
    printf("Digite um número para quantidade de multiplicações: ");
    scanf("%d", &b);
  }
  r = mdc(a, b);
  printf("%d", r);
  return 0;
}