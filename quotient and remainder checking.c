#include <stdio.h>

int main()
{
	int num1, num2; 
	int q, rem; 
	
	printf("Enter first number :"); 
	scanf("%d", &num1);
	
	printf("Enter second number :"); 
	scanf("%d", &num2);
	
	if(num2==0) {
		printf("not divisible by zero.\n");
		return 1;
	}
	
	q = num1/num2; 
	
	rem = num1 % num2; 

	printf("Quotient = %d, Remainder = %d\n", q, rem);
	
	return 0;
}
    