#include<stdio.h>
int main()
{
	int range, fib0 = 0, fib1 = 1,fib2;
	printf("Enter a maximum range: ");
	scanf("%d", &range);
	printf("Fib(0) = %d\n",fib0);
	printf("Fib(1) = %d\n", fib1);
	for(int i = 2; i <= range; i++)
	{
		fib2 = fib0+fib1;
		fib0 = fib1;
		fib1 = fib2;
		printf("Fib(%d) = %d\n", i, fib2);
	}
	return 0;
}
