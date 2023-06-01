#include <stdio.h>
#include <math.h>

int main () {
  int i, j, n, A[10][10], soma, est_diag_dom = 1;
  
  printf("Digite o tamanho da matriz quadrada: ");
  scanf("%d", &n);
  
  for (i=0;i<n;i++) {
    for (j=0; j<n; j++) {
      printf("Digite o elementro A[%d][%d]: ",i,j);
      scanf("%d", &A[i][j]);
    }
  }
  for (i=0; i<n;i++) {
    soma=0;
    for (j=0; j<n; j++) {
      if (i != j) {
        soma += A[i][j];
      }
    }
    if (abs(A[i][i]) <= soma){
      est_diag_dom = 0;
      break;
    }
  }
  
  if (est_diag_dom) {
    printf("A matriz é estritamente diagonalmente dominante.");
  } else {
    printf("A matriz não é estritamente diagonalmente dominante.");
  }
   
  return 0;
}
