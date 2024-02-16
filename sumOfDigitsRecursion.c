#include <stdio.h>

int n, num, sum = 0;

int sum_digits(int num){
	if (num == 0)
		return sum;
	else{
		n = num % 10;
		sum += n;
		return (sum_digits(num/10));
	}	
}

void main(){
	printf("Enter The Number: ");
	scanf("%d", &num);

	printf("The Sum Of Digits: ");
	printf(" %d ", sum_digits(num));
}