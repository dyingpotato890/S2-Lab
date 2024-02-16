#include <stdio.h>

int arr[100], i, n;
float sum, avg;

float arr_sum(){
	for (i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

float arr_avg(){
	return (sum/n);
}

void main(){
	printf("\nEnter The Number Of Array Elements: ");
	scanf("%d", &n);

	printf("\n");
	for (i = 0; i < n; i++){
		printf("Enter The Number: ");
		scanf("%d", &arr[i]);
	}

	printf("\nSum Of Array Elements: %.2f", arr_sum());
	printf("\nAverage Of Array Elements: %.2f", arr_avg());
}