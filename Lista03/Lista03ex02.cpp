#include <iostream>
float c2f(float celcius){
  return (9 * celcius / 5)+32;
}
float f2c(float fahrenheit){
  return (fahrenheit -32)*5 / 9;
}
int main() {
  int escolha = 3;
  float celcius, fahrenheit, R;
  while (escolha <1 or escolha > 2){
    printf("Digite 1 para converter Celcius para Fharenheit e 2 para o contrário: ");
    scanf("%d",&escolha);
  }
  if (escolha == 1){
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &celcius);
    R = c2f(celcius);
    printf("%.2f fahrenheit", R);
  }
  if (escolha == 2){
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    R = f2c(fahrenheit);
    printf("%.2f celcius", R);
  }
}