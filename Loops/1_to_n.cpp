#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Numbers between 1 to %d are: ",num);
	for(int i = 1; i <= num; i++)
	{
		printf("\n%d", i);
	}
	return 0;
}
