#include<stdio.h>
int gcd(int num1, int num2)
{
	int temp;
	while(num2 != 0)
	{
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	return num1;
}
int lcm(int num1, int num2)
{
	return (num1*num2)/gcd(num1, num2);
}
int main()
{
	int num1, num2;
	printf("Enter the both numbers: ");
	scanf("%d%d", &num1, &num2);
	printf("GCD of two numbers is: %d",gcd(num1, num2));
	printf("\nLCM of two numbers is: %d", lcm(num1,num2));
	return 0;
}
