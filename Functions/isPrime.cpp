#include<stdio.h>
int isPrime(int num)
{
	if(num <= 1) return 0;
	for(int i = 2; i < num/2; i++)
		if(num % i == 0) return 0;
	return 1;
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(isPrime(num))
	printf("Entered %d is a Prime number.", num);
	else
	printf("Entered %d is not a Prime number.", num);
	return 0;
	
}
