#include <iostream>
int primo(int N){
  int m, x;
  int count = 1;
  int divs = 1;
  m = N/2 + 1;
  while (count <= m){
    x = N % count;
    if (x == 0 or count == 1){
      divs++;
    } 
    count ++;
    if (divs > 2){
      break;
    }
  }
  if (divs == 2 or N == 2){
    bool status = true;
    return status;
  }
  else{
    bool status = false;
    return status;
  }
}
int main() {
  int r;
  int passo, maior, menor;
  int n1, n2;
  printf("Digite 2 números inteiros: ");
  scanf("%d", &n1);
  scanf("%d", &n2);
  if (n1 > n2){
    menor = n2;
    maior = n1;
    passo = menor;
  }
  else{
    menor = n1;
    maior = n2;
    passo = menor;
  }
  printf("Todos os numeros primos entre %d e %d são: ", menor, maior);
  while (passo <= maior){
    r = primo(passo);
    if (r == 1){
      printf("%d, ", passo);
    }
    passo++;
  } 
}