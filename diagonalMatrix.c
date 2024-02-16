#include <stdio.h>

void main(){
	int mat[100][100], r, i, j, flag = 1, trace = 0;

	printf("\nEnter The Number of Rows/Columns: ");
	scanf("%d",&r);

	printf("\nEnter The Matrix: \n");
	for (i = 0; i < r; i++){
		for (j = 0; j < r; j++){
			scanf("%d", &mat[i][j]);

			if (i != j){
				if (mat[i][j] != 0)
					flag = 0;
			}
			else{
				if (mat[i][j] == 0)
					flag = 0;
			}
		}
	}

	if (flag == 1){
		printf("\nThe Given Matrix Is A Diagonal Matrix.");
		printf("\nTrace Of The Given Diagonal Matrix = ");

		for (i = 0; i < r; i++){
			for (j = 0; j < r; j++){
				if (i == j)
					trace += mat[i][j];
			}
		}
		printf("%d", trace);
	}

	else
		printf("\nThe Given Matrix Is Not A Diagonal Matrix.");
}