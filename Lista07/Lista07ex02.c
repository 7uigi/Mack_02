#include <stdio.h>
int soma_digitos(int x){
  if (x < 0){
    x = x * -1;
  }
  int a = x/10;
  int b = x%10;
  if (a == 0){
    return b;
  }
  else{
    return b + soma_digitos(a);
  }
}
int main(void) {
  int r;
  int x;
  printf("Digite um numéro: ");
  scanf("%d", &x);
  r = soma_digitos(x);
  printf("%d", r);
  return 0;
}