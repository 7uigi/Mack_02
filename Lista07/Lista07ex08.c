#include <stdio.h>
int divisiveis(int arr[], int tam, int x, int y){
  int a = 0;
  a = arr[tam-1] % x;
  if (a == 0){
    y = y+arr[tam-1];
  }
  if (tam != 0){
    return divisiveis(arr, tam -1, x, y);
  }
  return y;
}
int main(void) {
  int r;
  int x = -1;
  int tam = -1;
  while (tam < 0){
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);
  }
  int y = 0;
  int arr[tam+1];
  for (int i=0; i<tam;i++){
    printf("Elemento do array na posição %d: ", i);
    scanf("%d",&arr[i]);
  }
  printf("Digite o numero para dividir: ");
  scanf("%d", &x);
  r = divisiveis(arr, tam, x, y);
  printf("\n%d", r);
  return 0;
}