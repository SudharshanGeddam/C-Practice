#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[30], n, *ptr;
	float sum = 0,avg = 0;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);
	ptr = (int*) calloc (n, sizeof(int));
	printf("Enter the elements into the array: ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", (ptr+i));
	}
	for(int i = 0; i < n; i++)
	{
		sum += *(ptr+i);
	}
	avg = sum / n;
	printf("\nAverage of the values entered is: %.2f", avg);
	free(ptr);
	return 0;
	
}
