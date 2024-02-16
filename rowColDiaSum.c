#include <stdio.h>

int A[100][100], o, flag = 1, sum, i, j, r;

void main(){
	printf("\nEnter The Number of Rows/Columns: ");
	scanf("%d",&r);

	printf("\nEnter The Matrix: \n");
	for (i = 0; i < r; i++){
		for (j = 0; j < r; j++)
			scanf("%d", &A[i][j]);
	}

    while (flag == 1){
        printf("\n\n=================== MENU ===================\n");
        printf("\t1) Row Sum\n");
        printf("\t2) Column Sum\n");
		printf("\t3) Diagonal Sum\n");
        printf("\t4) Exit\n");
        printf("============================================\n");

        printf("\nEnter Your Option: ");
        scanf("%d", &o);

        switch (o){
            case 1:
                for (i = 0; i < r; i++){
					sum = 0;
					for (j = 0; j < r; j++)
						sum += A[i][j];
					printf("\nSum Of Row %d = %d ", (i+1), sum);
				}
				break;

            case 2:
                for (i = 0; i < r; i++){
					sum = 0;
					for (j = 0; j < r; j++)
						sum += A[j][i];
					printf("\nSum Of Column %d = %d ", (j+1), sum);
				}
				break;

            case 3:
				sum = 0;
                for (i = 0; i < r; i++){
					for (j = 0; j < r; j++){
						if (i == j)
							sum += A[i][j];
					}
				}
				printf("\nSum Of Main Diagonal = %d ", sum);
				break;

			case 4:
                printf("\nClosing...");
                flag = 0;
                break;
            
            default:
                printf("\nPlease Enter A Valid Option!\n");
                break;
        }
    }
}