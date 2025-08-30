#include<stdio.h>

void BubbleSort(int arr[], int size)
{
	int flag = 0;
	int i, j, temp;
	for(i = 0; i < size-1; i++)
	{
		flag = 0;
		for(j = 0; j < size-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(!flag)
		break;
	}	
}
void PrintArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}
int main()
{
	int arr[] = {12, 5, 9, 20, 47, 89, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Unsorted array is: \n");
	PrintArray(arr, size);
	BubbleSort(arr, size);
	printf("\nSorted array is: \n");
	PrintArray(arr, size);
	return 0;
}
