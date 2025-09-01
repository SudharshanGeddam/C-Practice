#include<stdio.h>

void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int arr[], int size)
{
	int min, i, j;
	for(i = 0; i < size-1; i++)
	{
		min = i;
		for(j = i+1; j < size; j++)
		{
			if(arr[j] < arr[min])
			min = j;
		}
		if(min != i)
		{
			Swap(&arr[i], &arr[min]);
		}
	}
}

void PrintArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	printf("%d\t", arr[i]);
}
int main()
{
	int arr[] = {15, 26, 1, 5, 0, 47, 25, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Array before sorting is:\n");
	PrintArray(arr, n);
	SelectionSort(arr, n);
	printf("\nArray after sorting is:\n");
	PrintArray(arr, n);
	return 0;
}
