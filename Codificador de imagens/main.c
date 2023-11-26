#include <stdio.h>
// Gustavo Luigi Chao Pinotti 32376979
// Arthur Oliveira de Menis 32349130
void ler(int n, int m, int matrix[n][m], int k, int l){
  for (int i = 0; i <n; i++){
    printf("\n");
    for (int j = 0; j <m; j++){
      printf("%d, ",matrix[i][j]);
    }
  }
}
char quadrantes(int n, int m, int matrix[n][m], int chave,int k,int l){
  int count = 0;
  if (m == 0){
    return 0;
  }
  if (n == 0){
    return 0;
  }
  int pmax = (k/2+1) * (l/2+1);
  int bmax = (k/2+1) * (l/2+1);
  if (chave >= 0){
    for (int i = 0; i < k/2+1; i++){
        for (int j = 0; j < l/2+1; j++){
            if (matrix[0][0] == 1){
                if (matrix[i][j] == 1){
                    count++;
                    if (count == pmax){
                        printf("P");
                    }
                }
            }
            if (matrix[0][0] == 0){
                if (matrix[i][j] == 0){
                    count++;
                    if (count == bmax){
                        printf("B");
                    }
                }
            }
        }
    }
  }
  pmax = (k/2) * (l/2);
  bmax = (k/2) * (l/2);
  if (bmax == 0){
    bmax++;
  }
  if (pmax == 0){
    pmax++;
  }
  count = 0;
  if (chave >= 0){
    if (n < 1){
      for (int i = 0; i < k/2+1; i++){
        for (int j = l/2+1; j < l+1; j++){
          if (matrix[k/2][l] == 1){
            if (matrix[i][j] == 1){
              count++;
              if (count == pmax){
                printf("P");
              }
            }
          }
          if (matrix[k/2][l] == 0){
            if (matrix[i][j] == 0){
              count++;
              if (count == bmax){
                printf("B");
              }
            }
          }
        }
      }
    }
  }
  pmax = (k/2+1) * (l/2);
  bmax = (k/2+1) * (l/2);
  count = 0;
  if (bmax == 0){
    bmax++;
  }
  if (pmax == 0){
    pmax++;
  }
  if (chave >= 0){
    if (n > 1){
      for (int i = k-k/2; i < k/2+2; i++){
        for (int j = 0; j < l/2+1; j++){
          if (matrix[k-k/2][0] == 1){
            if (matrix[i][j] == 1){
              count++;
              if (count == pmax){
                printf("P");
              }
            }
          }
          if (matrix[k-k/2][0] == 0){
            if (matrix[i][j] == 0){
              count++;
              if (count == bmax){
                printf("B");
              }
            }
          }
        }
      }
    }
  }
  pmax = (k/2) * (l/2);
  bmax = (k/2) * (l/2);
  count = 0;
  if (bmax == 0){
    bmax++;
  }
  if (pmax == 0){
    pmax++;
  }
  if (chave >=0){
    for (int i = k-(k/2+1); i < k+1; i++){
        for (int j = l/2+1; j < l+1; j++){
            if (matrix[k/2][l-1] == 1){
                if (matrix[i][j] == 1){
                    count++;
                    if (count == pmax){
                        printf("P");
                        chave++;
                        return chave;
                    }
                }
            }
            if (matrix[k/2][l-1] == 0){
                if (matrix[i][j] == 0){
                    count++;
                    if (count == bmax){
                        printf("B");
                        chave++;
                        return chave;
                    }
                }
            }
        }
    }
  }
  chave++;
  if (chave == 0){
    printf("X");
    chave = quadrantes(n, m, matrix, chave, k/2+1, l/2+1);
  }
  if (chave == 1){
    printf("X\n");
    int alpha = n - n/2;
    int beta = m - m/2-1;
    int quad2[alpha][beta];
    for (int i = 0; i<alpha;i++){
      for (int j = 0; j<beta;j++){
        quad2[i][j] = matrix[i][m/2+1+j];
      }
    }
    chave = quadrantes(alpha,beta, quad2, chave, alpha/2, beta/2);
  }
  if (chave == 2){
    printf("X\n");
    int delta = n/2;
    int gama = m/2+1;
    int quad3[delta][gama];
    for (int i = 0; i<delta;i++){
      for (int j = 0; j<gama;j++){
        quad3[i][j] = matrix[n/2+1+i][j];
      }
    }
    chave = quadrantes(delta,gama, quad3, chave, delta, gama);
  }
  if (chave == 3){
    printf("X\n");
    int epsilon = n/2;
    int zeta = m/2;
    int quad3[epsilon][zeta];
    for (int i = 0; i<epsilon;i++){
      for (int j = 0; j<zeta;j++){
        quad3[i][j] = matrix[n-1-i][m/2+1+i];
      }
    }
    chave = quadrantes(epsilon,zeta, quad3, chave, epsilon, zeta);
  }
  return 0;
}
int main(void) {
  char cod;
  int chave = -1;
  int escolha = 0;
  int decisao = 0;
  int n,m;
  FILE * imagens;
  while (decisao == 0){
    printf("Imagem manual = 1 ou Arquivo de imagem = 2\n");
    scanf("%d",&escolha);
    if (escolha == 1){
      printf("Quantas colunas? ");
      scanf("%d",&m);
      if (m > 1024){
        printf("O codificador não suporta esse tamanho de imagen");
        return 0;
      }
      printf("\nQuantas Linhas? ");
      scanf("%d",&n);
      if (n > 768){
        printf("O codificador não suporta esse tamanho de imagen");
        return 0;
      }
      int matrix[n][m];
      for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
          printf("\nCasa [%d][%d]",i,j);
          scanf("%d",&matrix[i][j]);
        } 
      }
      decisao++;
      int k=n;
      int l=m;
      ler (n, m, matrix, k, l);
      printf("\n");
      cod = quadrantes(n, m, matrix, chave, k, l);
    } 
    if (escolha == 2){
      printf("Letra = 2, Numero = 3, Imagem3 = 4\n");
      scanf("%d",&escolha);
      if (escolha == 2){
        imagens = fopen("Letra.txt","r");
        decisao++;
      }
      if (escolha == 3){
        imagens = fopen("numero.txt","r");
        decisao++;
      }
      if (escolha == 4){
        imagens = fopen("Imagem.txt","r");
        decisao++;
      }
    }
  }
  if (n > 768){
    printf("O codificador não suporta esse tamanho de imagen");
    return 0;
  }
  if (m > 1024){
    printf("O codificador não suporta esse tamanho de imagen");
    return 0;
  }
  if (escolha >=2){
    if (imagens == NULL){
      printf("ERRO");
      return -1;
    }
    fscanf(imagens,"%i %i", &n, &m);
    int matrix[n][m];
    for (int i=0; i<n; i++){
      for (int j=0; j<m; j++){
        fscanf(imagens,"%i", &matrix[i][j]);
      }
    }
    fclose(imagens);
    int k=n;
    int l=m;
    ler (n, m, matrix, k, l);
    printf("\n");
    cod = quadrantes(n, m, matrix, chave, k, l);
  }
  return 0;
}