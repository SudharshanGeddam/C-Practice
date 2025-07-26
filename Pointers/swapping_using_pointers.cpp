#include<stdio.h>
int swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("a = %d, b = %d", *a, *b);
	return 1;
}
int main()
{
	int a, b;
	printf("Enter two any two numbers: ");
	scanf("%d%d", &a, &b);
	printf("Numbers before swapping:\n");
	printf("a = %d, b = %d", a, b);
	printf("\nNumbers after swapping:\n");
	swap(&a, &b);
	return 0;
}
