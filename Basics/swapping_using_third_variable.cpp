#include<stdio.h>
int main()
{
	int num1, num2, temp=0;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("Number before swapping num1= %d, num2= %d", num1, num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\nNumbers after swapping num1= %d, num2= %d",num1, num2);
	return 0;
}
