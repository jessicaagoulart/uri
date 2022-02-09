#include <stdio.h>

int main() {
 
  int n, m; 
  int matrix[1000][1000];

  scanf("%d", &n);
  scanf("%d", &m);

  for ( int i=0; i<n; i++ ) {
    for ( int j=0; j<m; j++ ){
      scanf ("%d", &matrix[ i ][ j ]);
      }
  }

  for ( int i=0; i<n; i++ ) {
    for ( int j=0; j<m; j++ ){
      if (matrix[i][j] == 42 && 
          matrix[i][j-1] == 7 &&
          matrix[i][j+1] == 7 &&
          matrix[i-1][j-1] == 7 &&
          matrix[i-1][j] == 7 &&
          matrix[i-1][j+1] == 7 &&
          matrix[i+1][j-1] == 7 &&
          matrix[i+1][j] == 7 &&
          matrix[i+1][j+1] == 7) {

        printf("%d %d\n", i+1, j+1);
        return 0;
      
      }
    }
  }

    printf("0 0\n");
    return 0;
}