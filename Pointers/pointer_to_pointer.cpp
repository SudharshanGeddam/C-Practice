#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int *ptr1 = &num;
	int **ptr2 = &ptr1;
	printf("Value = %d", num);
	printf("\nValue via pointer 1 = %d", *ptr1);
	printf("\nValue via pointer 2 = %d", **ptr2);
	return 0;
}
