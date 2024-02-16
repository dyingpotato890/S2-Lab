#include <stdio.h>

void main(){
	int i,num;
	
	printf("Enter The Number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++){	
		if (num % i == 0)
			printf("\n%d is a factor of %d", i, num);
	}
}