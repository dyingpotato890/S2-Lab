#include <stdio.h>

int gcd(int largest, int smallest){
	if (largest % smallest == 0)
		return smallest;
	else{
		int temp = smallest;

		smallest = largest % smallest;
		largest = temp;
		gcd(largest, smallest);
	}
}

void main(){
	int a, b, largest, smallest;

	printf("\nEnter The Two Numbers: ");
	scanf("%d %d", &a, &b);

	if (a > b){
		largest = a;
		smallest = b;
	} else {
		largest = b;
		smallest = a;
	}

	printf("\nThe GCD Of The Two Numbers Is: %d", gcd(largest,smallest));
}