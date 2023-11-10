#include <stdio.h>
int mul(a, b){
  if(b == 1){
    return a;
    printf("%d\n", a);
  }
  else{
    
    return a + mul(a,b-1);
  }
}
int main(void) {
  int a,b,r;
  printf("Digite um número: ");
  scanf("%d", &a);
  printf("Digite um número para quantidade de multiplicações: ");
  scanf("%d", &b);
  r = mul(a, b);
  printf("%d", r);
  return 0;
}