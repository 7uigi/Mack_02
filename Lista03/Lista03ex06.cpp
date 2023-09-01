#include <iostream>
float fra(float n){
  float i = 1;
  float pot;
  float soma = 0;
  float fracao;
  float j = 0;
  while( i <= n){
    pot = i * i;
    fracao = i / pot;
    soma = soma * -1;
    soma = soma + fracao;
    i++;
  }
  return soma;
}
int main() {
  float r;
  float n;
  int x;
  x = n;
  printf("Digite um numero: ");
  scanf("%f", &n);
  r = fra(n);
  if (r <= 0){
    r = r * -1;
  }
  printf("%f", r);
}