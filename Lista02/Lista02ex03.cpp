#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
  int numero;
  int chute;
  int tentativas = 1;
  srand(time(NULL));
  numero = 1 + rand()%100;
  printf("Escolha um número de 1 a 100\n");
  scanf("%d", &chute);
  while (chute < 1 or chute >100){
    printf("Escolha um número de 1 a 100\n");
    scanf("%d", &chute); 
  }
  while (chute != numero){
    if (chute < numero){
      printf("Você chutou muito baixo!\n");
      tentativas++;
      printf("Escolha um número de 1 a 100\n");
      scanf("%d", &chute);
    }
    else{
      printf("Você chutou muito alto!\n");
      tentativas++;
      printf("Escolha um número de 1 a 100\n");
      scanf("%d", &chute);
    }    
    if (tentativas > 5){
      break; 
    }
  }
  if (tentativas > 5){
    printf("“você excedeu o número máximo de tentativas, o número sorteado era %d", numero);
  }
  if (tentativas <= 5){
    printf("Parabéns!!! Você acertou! E levou %d tentativas\n", tentativas);
  }
}
