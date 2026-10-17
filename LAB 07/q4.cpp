//square matrix, transpose , check symmetry
#include <stdio.h>
int main(){
	int dimension;
	int symmetric = 0;
	printf("Enter dimension for sqaure matrix: ");
	scanf("%d", &dimension);
	int matrix[dimension][dimension];
	
	for(int i = 0; i < dimension; i++){
		for (int j = 0; j < dimension; j++){
			printf("Enter value at [%d][%d]", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int n = 1; n <= 2; n++){
		for(int i = 0; i < dimension; i++){
			for (int j = 0; j < dimension; j++){
				if(n == 1){
					if(i == 0 && j == 0){
						printf("Enterred Matrix: \n");
					}
					printf("%d\t", matrix[i][j]);
				} else {
					if(i == 0 && j == 0){
						printf("Transposed Matrix: \n");
					}
					printf("%d\t", matrix[j][i]);
					
				}
			}
		printf("\n");
		}	
	}
	for(int i = 0; i < dimension; i++){
		for (int j = 0; j < dimension; j++){
			if (matrix [i][j] == matrix[j][i]){
				symmetric = 1;
			} else {
				symmetric = 0; break;
			}
		}
		if (symmetric == 0){
			break;
		}
	}
	printf("Your matrix is ");
	if (symmetric == 1){
		printf("Symmetric.");
	} else {
		printf("NOT symmetric.");
	}
	return 0;
}
