#include<stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Partition(int arr[], int low, int high)
{
	int pivot = arr[low];
	int i = low-1;
	int j = high+1;
	while(1)
	{
		do
		{
			j--;
		}while(arr[j] > pivot);
		do
		{
			i++;
		}while(arr[i] < pivot);
		if(i < j)
		{
			swap(&arr[i], &arr[j]);
		}
		else
		return j;
	}
}

void QuickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		int loc = Partition(arr, low, high);
		QuickSort(arr, low, loc);
		QuickSort(arr, loc+1, high);
	}
}


void PrintArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d \t", arr[i]);
	}
}

int main()
{
	int arr[] = {25,74,20,63,11,1,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low = 0;
	int high = n-1;
	printf("Array before sorting:\n");
	PrintArray(arr, n);
	QuickSort(arr, low, high);
	printf("\nArray after sorting:\n");
	PrintArray(arr, n);
	return 0;
}
