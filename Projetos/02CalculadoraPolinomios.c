#include <stdio.h>
#include <math.h>
// Gustavo Luigi Chao Pinotti 32376979
// Arthur Oliveira de Menis 32349130
int menu(){
  int x = 0;
  printf("\n");
  printf("==========================================================\n");
  printf("||                Escolha uma das 6                     ||\n");
  printf("|| 0. Menu:                                             ||\n");
  printf("|| 1. Ler o Polinómio.                                  ||\n");
  printf("|| 2. Resolver o Polinómio.                             ||\n");
  printf("|| 3. Somar os Polinómios.                              ||\n");
  printf("|| 4. Multiplicar os Polinómios.                        ||\n");
  printf("|| 5. Encerrar                                          ||\n");
  printf("==========================================================\n");
  printf("Escolha: ");
  scanf("%d", &x);
  return x;
}
void ler(int polinomo[], int grau){
  int pot = grau;
  for (int i = 0; i <=grau; i++){
    printf("%dx^%d, ",polinomo[i], pot);
    pot--;
  }
}
int calc(int polinomo[], int grau, int x){
  int pot = grau;
  int back = 0;
  int R = 0;
  for (int i = 0; i <=grau; i++){
    back = polinomo[i] *(pow(x,pot));
    pot--;
    R = back + R;

  }
  return R;
}
void soma(int polinomo1[], int grau1, int polinomo2 [], int grau2){
  int pot1 = grau1;
  int pot2 = grau2;
  int casa1 = 0;
  int casa2 = 0;
  printf("P(x) = ");
  ler(polinomo1, grau1);
  printf("\nQ(x) = ");
  ler(polinomo2, grau2);
  printf("\nP(x) + Q(x) = ");
  if (grau1 >= grau2){
    int polinomo3[grau1+1];
    for (int i =0; i <= grau1; i++){
      polinomo3[i] = polinomo1[i];
      if (pot1 == pot2){
        pot2--;
        polinomo3[i] = polinomo3[i] + polinomo2[casa2];
        casa2++;
      }
      pot1--;
    }
    ler(polinomo3, grau1);
  }
  else{
    int polinomo3[grau2+1];
    for (int i =0; i <= grau2; i++){
      polinomo3[i] = polinomo2[i];
      if (pot1 == pot2){
        pot1--;
        polinomo3[i] = polinomo3[i] + polinomo1[casa1];
        casa1++;
      }
      pot2--;
    }
    ler(polinomo3, grau2);
  }
}
void multiplic(int polinomo1[], int grau1, int polinomo2 [], int grau2){
  int n = 0;
  int pot1 = 0;
  int pot2 = 0;
  int grau3max = grau1 + grau2;
  int grau3 = 0;
  int polinomo3[grau3max];
  printf("P(x) = ");
  ler(polinomo1, grau1);
  printf("\nQ(x) = ");
  ler(polinomo2, grau2);
  printf("\nP(x) * Q(x) = ");
  for (int y =0; y <= grau3max; y++){
    polinomo3[y] = 0;
  }
  for (int i = 0; i <= grau1; i++){
    pot1 = grau1 -i;
    for (int j = 0; j<= grau2; j++){
      pot2 = grau2 - j;
      n = polinomo1[i] * polinomo2[j];
      grau3 = (-1*(pot1+pot2)) + grau3max;
      polinomo3[grau3] = n + polinomo3[grau3];
    }
  }
  ler(polinomo3, grau3max);
}
int main(){
  int n = 0;
  int qual = 0;
  int x = 0;
  int grau1;
  int resp;
  int pot= 0;
  printf("Insira o grau do polinomio1: ");
  scanf("%d", &grau1);
  pot = grau1;
  int polinomo1 [grau1+1];
  for (int j = 0; j < grau1+1; j++){
    printf("Digite o coeficiente %d: ", pot);
    scanf("%d", &polinomo1[j]);
    pot--;
  } 
  int grau2;
  printf("Insira o grau do polinomio2: ");
  scanf("%d", &grau2);
  pot = grau2;
  int polinomo2 [grau2 + 1];
  for (int i = 0; i < grau2+1; i++){
    printf("Digite o coeficiente %d: ", pot);
    scanf("%d", &polinomo2[i]);
    pot--;
  }
  while (n <=5){
    if (n == 0){
      n = menu(); 
    }
    else if (n == 1){
      printf("Polinómio 1 ou 2: ");
      scanf("%d", &qual);
      if (qual == 1){
        ler(polinomo1, grau1);
      }
      else if (qual == 2){
        ler(polinomo2, grau2);
      }
      n = 0;
    }
    else if (n == 2){
      printf("Digite qual será a variavel: ");
      scanf("%d", &x);
      printf("Polinómio 1 ou 2: ");
      scanf("%d", &qual);
      if (qual == 1){
        resp = calc(polinomo1, grau1, x);
        ler(polinomo1, grau1);
        printf("Para x = %d temos que P(%d) = %d", x, x, resp);
      }
      else if (qual == 2){
        resp = calc(polinomo2, grau2, x);
        ler(polinomo2, grau2);
        printf("Para x = %d temos que P(%d) = %d", x, x, resp);
      }
      n = 0;
    }
    else if (n == 3){
      soma(polinomo1,  grau1, polinomo2,  grau2);      
      n = 0;
    }
    else if (n == 4){
      multiplic(polinomo1,  grau1, polinomo2,  grau2);
      n = 0;
    }
    else if (n == 5){
      printf("Fim");
      break;
    }
  }
}