#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Entered number is: %d", num);
	printf("\nAddress of the number stored is: %p", &num);
	return 0;
}
