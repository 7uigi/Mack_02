#include <iostream>
int tabuada(int x){
  int count = 1;
  int tabuada;
  while (count <= 9){
    tabuada = x * count;
    printf("%d vezes %d = %d\n", x, count, tabuada);
    count++;
  }
  return 0;
}
int main() {
  int x;
  printf("Digite um número para a tabuada: ");
  scanf("%d", &x);
  tabuada(x);
}