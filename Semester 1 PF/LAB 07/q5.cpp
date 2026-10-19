//input matrx any size, output matrix and maximum element
#include <stdio.h>
int main(){
	int row, col, max;
	printf("Enter rows and columns for matrix: ");
	scanf("%d %d", &row, &col);
	int matrix[row][col];
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("Enter value at [%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
			if (i == 0 && j == 0){
				max = matrix[i][j];
				continue;
			}
			if (matrix[i][j] > max){
				max =  matrix[i][j];
			}
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("Maximum element is: %d", max);
	return 0;
}
