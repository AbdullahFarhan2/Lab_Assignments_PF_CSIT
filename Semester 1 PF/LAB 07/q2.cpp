#include <stdio.h>
int main(){
	int T = 0, m, n;
	printf("Enter number of rows and columns: ");
	scanf("%d %d", &m, &n);
	int matrix[m][n];
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Enter value at [%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
			if (matrix[i][j] == 0){
				T++;
			}
		}
	}
	printf("\n\nYour matrix is ");
	if (T >= ((m * n) / 2 )){
		printf("sparse matrix");
	} else {
		printf("NOT sparse matrix");
	}
	return 0;
}
