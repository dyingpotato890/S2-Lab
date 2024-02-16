#include <stdio.h>

int A[100][100], B[100][100],mult[100][100], r1, c1, r2, c2, i, j, k, sum = 0;

void initArr(int arr[100][100], int r, int c){
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			scanf("%d", &arr[i][j]);
		}
	}
}

void mat_mult(){
	for (i = 0; i < r1; i++){
		for (j = 0; j < c2; j++){
			sum = 0;
			for (k = 0; k < r2; k++)
				sum += A[i][k] * B[k][j];
			mult[i][j] = sum;
		}
	}

	printf("\nMultiplied Matrix: ");
	for (i = 0; i < r1; i++){
		printf("\n");
		for (j = 0; j < c2; j++)
			printf("%d\t", mult[i][j]);
	}
}

void main(){
	printf("\nEnter The Number of Rows & Columns Of A: ");
	scanf("%d %d",&r1, &c1);
	printf("\nEnter The Number of Rows & Columns Of B: ");
	scanf("%d %d",&r2, &c2);

	if (c1 == r2){
		printf("\nEnter The Matrix A: \n");
		initArr(A, r1, c1);
		printf("\nEnter The Matrix B: \n");
		initArr(B, r2, c2);

		mat_mult();	
	}
	else
		printf("\nThe Two Matrices Cannot Be Multiplied");
}