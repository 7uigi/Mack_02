#include <iostream>
float soma(float a, float b, float c){
  return a+b+c;
}
int main() {
  float a,b,c,R;
  printf("Digite o primeiro número: ");
  scanf("%f", &a);
  printf("Digite o segundo número: ");
  scanf("%f", &b);
  printf("Digite o terceiro número: ");
  scanf("%f", &c);
  R = soma(a,b,c);
  printf("%.2f", R);
}