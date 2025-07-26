#include<stdio.h>
int main()
{
	int n;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements into the array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int *ptr = arr;
	printf("\nAccessing array elements using pointer:\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr+i));
	}
	return 0;
}
