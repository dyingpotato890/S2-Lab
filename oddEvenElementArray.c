#include <stdio.h>

void main(){
	int arr[100], i, n, odd[100], even[100], odd_inc = 0, even_inc = 0;

	printf("\nEnter The Number Of Array Elements(0 - 100): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		printf("Enter The Number: ");
		scanf("%d", &arr[i]);

		if ((arr[i] % 2) == 0)
			even[even_inc++] = arr[i];
		else
			odd[odd_inc++] = arr[i];
	}

	printf("\nOdd Array: {");
	for (i = 0; i < odd_inc; i++)
		printf("\t%d", odd[i]);
	printf("\t}\n");

	printf("\nEven Array: {");
	for (i = 0; i < even_inc; i++)
		printf("\t%d", even[i]);
	printf("\t}\n");
}