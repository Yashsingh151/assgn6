#include<stdio.h>

int main() {
    int n,m;

    printf("Enter the number of row: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];  
    int transpose[m][n];

    //Input of matrix from the user
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("Enter the value for the matrix (%d,%d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Given matrix 
    printf("\n******** Given Matrix ********\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", matrix[i][j]);
            if(j == m-1) {
                printf("\n");
            }
        }
    }

    //Calculating the transpose 
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    //Transpose of matrix 
    printf("\n******** The Transpose of the given matrix ********\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", transpose[i][j]);
            if(j == n-1 ){
                printf("\n");
            }
        }
    }
    return 0;
}