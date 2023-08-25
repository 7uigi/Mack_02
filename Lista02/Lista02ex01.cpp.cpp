#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
  int numero;
  int chute;
  srand(time(NULL));
  numero = 1 + rand()%100;
  printf("Escolha um número de 1 a 100\n");
  scanf("%d", &chute);
  while (chute < 1 or chute >100){
    printf("Escolha um número de 1 a 100\n");
    scanf("%d", &chute); 
  }
  if (chute == numero){
    printf("Parabéns!!! Você acertou!\n");
  }
  if (chute < numero){
    printf("Você chutou muito baixo! O valor correto é %d", numero);
  }
  else{
    printf("Você chutou muito alto! O valor correto é %d", numero);
  }
}