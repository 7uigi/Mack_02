#include <stdio.h>
int  potencia(int x,int n){
  if (n == 1){
    return x;
  }
  else{
    return x * potencia(x,n-1);
  }
}
int main(void) {
  int x, n, r;
  printf("Digite um número: ");
  scanf("%d",&x);
  printf("Digite um número para usar de potência: ");
  scanf("%d",&n);
  r = potencia(x, n);
  printf("%d", r);
}