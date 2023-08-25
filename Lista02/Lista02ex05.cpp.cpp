#include <iostream>
int main() {
  int numero;
  int resto;
  int count = 0;
  int divisores;
  divisores = {};
  printf("digite um número inteiro: ");
  scanf("%d", &numero);
  while (count <= numero){
    count++;
    resto = numero % count;
    if (resto == 0){   
      divisores += count;
    }
  }
  divisores -= numero;
  if(divisores == numero){
    printf("%d é um número inteiro perfeito: ", divisores);
  }
  else{
    printf("%d NÃO é um número inteiro perfeito: ", divisores);
  }
}