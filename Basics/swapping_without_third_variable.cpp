#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("Numbers before swapping num1= %d, num2= %d", num1, num2);
	num1 = (num1+num2) - num1;
	num2 = (num1+num2) - num2;
	printf("\nNumbers after swapping num1= %d, num2= %d", num1, num2);
	return 0;
}
