#include <stdio.h>

void main(){
	int A[100][100], AT[100][100], r, i, j, flag = 1, element;

	printf("\nEnter The Number of Rows/Columns: ");
	scanf("%d", &r);

	printf("\nEnter The Matrix: \n");
	for (int i = 0; i < r; i++){
		for (int j = 0; j < r; j++){
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i < r; i++){
		for (j = 0; j < r; j++){
			if (A[i][j] != AT[i][j])
				flag = 0;
		}
	}

	if (flag == 0)
		printf("The Given Matric Is Not Symmetric");
	else
		printf("The Given Matric Is Symmetric");
}