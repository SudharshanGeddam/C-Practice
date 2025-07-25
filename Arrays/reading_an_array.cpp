#include<stdio.h>
int main()
{
	int range, arr[100];
	printf("Enter the range of the array: ");
	scanf("%d", &range);
	printf("Enter the array elements:\n");
	for(int i = 1; i <= range; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray elements entered are:\n");
	for(int i =1; i <= range; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
