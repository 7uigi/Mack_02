#include <iostream>
int main() {
  int numero;
  int resto;
  int count = 0;
  int divisores{};
  printf("digite um número inteiro:");
  scanf("%d", &numero);
  printf("Os divisores de %d são: ", numero);
  while (count <= numero){
    count++;
    resto = numero % count;
    if (resto == 0){
      printf("%d, ", count);
    }
  }
}