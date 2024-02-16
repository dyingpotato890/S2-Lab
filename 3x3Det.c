#include <stdio.h>

int mat[100][100], i, j, det = 0;

int arr_det(){
	for(i = 0; i < 3; i++)
    	det += (mat[0][i]*(mat[1][(i+1)%3]*mat[2][(i+2)%3] - mat[1][(i+2)%3]*mat[2][(i+1)%3]));
	return det;
}

void main(){
	printf("Enter The 3x3 Determinant: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &mat[i][j]);
		}
	}

	printf("The Matrix: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++)
			printf("%d\t",mat[i][j]);
		printf("\n");
	}

	printf("\nThe Determinant Of The Matrix Is: %d", arr_det());
}