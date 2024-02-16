#include <stdio.h>

void initArr(int arr[100][100], int r, int c){
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			scanf("%d", &arr[i][j]);
		}
	}
}

void main(){
	int A[100][100],B[100][100],AB[100][100],BA[100][100], r, c, i, j, sum1, sum2, flag = 1;

	printf("\nEnter The Number of Rows & Columns: ");
	scanf("%d %d",&r, &c);

	printf("\nEnter The Matrix A: \n");
	initArr(A, r, c);
	printf("\nEnter The Matrix B: \n");
	initArr(B, r, c);

	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
			sum1 = 0;
			sum2 = 0;
			for (int k = 0; k < c; k++){
				sum1 += A[i][k]*B[k][j];
				sum2 += B[i][k]*A[k][j];
			}
			AB[i][j] = sum1;
			BA[i][j] = sum2;

			if (AB[i][j] != BA[i][j])
				flag = 0;
		}
	}

	if (flag == 0)
		printf("AB And BA Are Not Equal.");
	else
		printf("AB And BA Are Equal.");
}