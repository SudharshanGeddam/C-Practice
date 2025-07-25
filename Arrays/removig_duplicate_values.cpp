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
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < n; j++)
		{
			if(arr[i] == arr[j+1])
			{
				arr[i] = arr[j+1];
				n--;
			}
			else
			break;
		}
		
	}
	printf("Array after removing duplicate values:\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

