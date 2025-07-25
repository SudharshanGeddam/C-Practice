#include<stdio.h>
int main()
{
	int range= 0,arr[100], min, max;
	printf("Enter the range of the array: ");
	scanf("%d", &range);
	printf("Enter the elements into the array:\n");
	for(int i = 0; i < range; i++)
	{
		scanf("%d", &arr[i]);
	}
	min = max = arr[0];
	for(int i = 0; i < range; i++)
	{
		if(arr[i] < min)
		min = arr[i];
		if(arr[i] > max)
		max = arr[i];
	}
	printf("Maximum element in the given array is: %d", max);
	printf("\nMinimum element in the given array is: %d", min);
	return 0;
}
