#include<stdio.h>
int main()
{
	int var;
	printf("Enter a integer: ");
	scanf("%d", &var);
	int *p = &var;
	printf("Address = %p \t Value = %d", p, var);
	p++;
	printf("\nAddress after incrementing = %p \t Value = %d", p, var);
	return 0;
}
