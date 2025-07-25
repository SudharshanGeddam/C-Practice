#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num == 0)
	printf("Entered number is equal to zero.");
	else if(num > 0)
	printf("Entered number is positive.");
	else
	printf("Entered number is negitive.");
	return 0;
}
