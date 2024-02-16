#include <stdio.h>

int a, b, c, n, i = 3;

int fibbonacci(int n){
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return (fibbonacci(n-2) + fibbonacci(n-1));
}

void main(){
	a = 0;
	b = 1;

	printf("Enter The Number Of Terms In The Series (>=3): ");
	scanf("%d", &n);

	printf("\nThe Fibonacci Sequence: ");
	for (i = 1; i <= n; i++)
		printf(" %d ", fibbonacci(i));
}