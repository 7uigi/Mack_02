#include <stdio.h>
float soma_array(float arr[], int tam){
  if (tam == 0){
    return 0;
  }
  else{
    return arr[tam-1] +soma_array(arr, tam -1);
  }
}
void ler(float arr[], int tam){
  printf("Vetor: [");
  for(int i=0; i<tam;i++){
    printf("%f", arr[i]);
  }
  printf("]");
}
int main(void) {
  float r;
  float arr[] = {1.1,2.2,3.3,4.4,5.5,6.6};
  int n = sizeof(arr)/sizeof(arr[0]);
  ler(arr,n);
  r = soma_array(arr, n);
  printf("\n%f", r);
  return 0;
}