#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	if(num1 > num2)
	printf("%d greater than %d", num1, num2);
	else if(num2 > num1)
	printf("%d greater than %d", num2, num1);
	else
	printf("%d and %d are equal.", num1, num2);
	return 0;
}
