#include <stdio.h>
int i, largest, smallest, n;

void largest_smallest(){	
	int arr[n];
	for (i = 0; i < n; i++){
		printf("\nEnter The Number: ");
		scanf("%d", &arr[i]);
	}

	largest = smallest = arr[0];

	for (i = 0; i < n; i++){
		if (arr[i] > largest)
			largest = arr[i];
		if (arr[i] < smallest)
			smallest = arr[i];
	}
	printf("\nLargest Number: %d", largest);
	printf("\nSmallest Number: %d", smallest);
}

void main(){
	printf("\nEnter The Number Of Array Elements: ");
	scanf("%d", &n);
	largest_smallest();
}