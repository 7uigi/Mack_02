#include <stdio.h>
int fib(int n){
  if(n <= 1){
    return n;
  }
  else{
    return fib(n-1) + fib(n-2);
  }
}
int main(void) {
  int n,r;
  int m=0;
  printf("Digite qual termos da sequencia de fibon: ");
  scanf("%d", &n);
  r = fib(n);
  printf("%d",r);
  return 0;
}