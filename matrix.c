#include <stdio.h>

int A[100][100], B[100][100], sum[100][100], mult[100][100], fill, o, flag = 1, r, i, j, k;

void initArr(int arr[100][100], int r){
	for (int i = 0; i < r; i++){
		for (int j = 0; j < r; j++){
			scanf("%d", &arr[i][j]);
		}
	}
}

void display(int arr[100][100]){
    for (i = 0; i < r; i++){	
		for (j = 0; j < r; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}

void add(){
    printf("\nA:\n");
    for (i = 0; i < r; i++){
		for (j = 0; j < r; j++)
			printf("%d\t", A[i][j]);
		printf("\n");
	}
    printf("\nB:\n");
    for (i = 0; i < r; i++){
		for (j = 0; j < r; j++)
			printf("%d\t", B[i][j]);
		printf("\n");
	}

    for (i = 0; i < r; i++){
		for (j = 0; j < r; j++)
			sum[i][j] = (A[i][j] + B[i][j]);
	}
    printf("\nSum Of A & B:\n");
	display(sum);
}

void product(){
    for (i = 0; i < r; i++){
		for (j = 0; j < r; j++){
			fill = 0;
			for (k = 0; k < r; k++)
				fill += (A[i][k] * B[k][j]);
			mult[i][j] = fill;
		}
	}
    printf("\nProduct Of A & B:\n");
	display(mult);
}

void transpose() {
    printf("\nTranspose Of A: ");
    for (i = 0; i < r; i++){
		printf("\n");
		for (j = 0; j < r; j++)
			printf("%d\t", A[j][i]);
    }

    printf("\nTranspose Of B: ");
    for (i = 0; i < r; i++){
		printf("\n");
		for (j = 0; j < r; j++)
			printf("%d\t", B[j][i]);
    }
}

void main(){
    while (flag == 1){
        printf("\n=================== MENU ===================\n");
        printf("\t1) Read Two Matrices\n");
        printf("\t2) Sum Of Two Matrices\n");
		printf("\t3) Product Of Two Matrices\n");
        printf("\t4) Transpose Of A Matrices\n");
        printf("\t5) Display A Matrices\n");
        printf("\t6) Exit\n");
        printf("============================================\n");

        printf("\nEnter Your Option: ");
        scanf("%d", &o);

        switch (o){
            case 1:
                printf("\nEnter The Number of Rows/Columns Of A & B: ");
	            scanf("%d",&r);
                printf("\nEnter The Matrix A: \n");
				initArr(A, r);
				printf("\nEnter The Matrix B: \n");
				initArr(B, r);\
				break;
            case 2: add(); break;
            case 3: product(); break;
			case 4: transpose(); break;
            case 5:
                printf("\nMatrix A:\n");
                display(A);
                printf("\nMatrix B:\n");
                display(B);
                break;
            case 6:
                printf("\nClosing...");
                flag = 0;
                break;      
            default:
                printf("\nPlease Enter A Valid Option!\n");
                break;
        }
    }
}