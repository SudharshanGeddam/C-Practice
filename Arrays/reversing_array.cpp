#include<stdio.h>
int main()
{
	int n, arr[n];
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	printf("Enter the elements into the array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = n-1 ; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
