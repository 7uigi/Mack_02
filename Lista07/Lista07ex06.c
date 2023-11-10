#include <stdio.h>
int divisiveis(int arr[], int tam, int x){
  int a = 0;
  a = arr[tam] % x;
  if (a != 0){
    return 0;
  }
  if (tam != 0){
    return divisiveis(arr, tam -1, x);
  }
  return 1;
}
int main(void) {
  int r;
  int x;
  int tam = 1;
  printf("Digite o tamanho do array: ");
  scanf("%d", &tam);
  int arr[tam+1];
  for (int i=0; i<tam;i++){
    printf("Elemento do array na posição %d: ", i);
    scanf("%d",&arr[i]);
  }
  printf("Digite o numero para dividir: ");
  scanf("%d", &x);
  r = divisiveis(arr, tam, x);
  printf("\n%d", r);
  return 0;
}