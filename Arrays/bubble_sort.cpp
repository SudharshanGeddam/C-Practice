#include<stdio.h>
int main()
{
	int arr[7] = {10,54,3,68,2,1,97};
	int temp, n= 7;
	for(int i = 0; i < n-1; i++)
	{
		int swapped = 0;
		for (int j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if(swapped == 0)
		{
			break;
		}
	}
	printf("Sorted array is:\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
