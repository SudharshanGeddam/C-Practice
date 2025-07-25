#include<stdio.h>
int main()
{
	int num, product= 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i = 1; i <= 10; i++ )
	{
		product = num *i;
		printf(" %d * %d = %d\n", num, i, product);
	}
	return 0;
}
