#include<stdio.h>
int power(int base, int exp)
{
	int result = 1;
	for(int i = 1; i <= exp; i++)
	{
		result *= base;
	}
	printf("%d Power of %d is %d", base, exp, result);
	return 0;
}

int main()
{
	int base, exp;
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter exponent: ");
	scanf("%d", &exp);
	power(base, exp);
}
