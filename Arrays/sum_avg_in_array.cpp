#include<stdio.h>
int main()
{
	int arr[100],range;
	double sum = 0, avg = 0;
	printf("Enter the range of the elements: ");
	scanf("%d", &range);
	printf("Enter the elements into the array:\n");
	for(int i = 0; i < range; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < range; i++)
	{
		sum  += arr[i];
	}
	avg = sum / range;
	printf("Sum of the elements in the array = %.2lf", sum);
	printf("\nAverage of the elements in the array = %.2lf", avg);
	return 0;
}
