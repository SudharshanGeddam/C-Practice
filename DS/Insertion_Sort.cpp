#include<stdio.h>

void InsertionSort(int arr[], int size)
{
	int i, j, temp;
	for(i = 1; i < size; i++)
	{
		temp = arr[i];
		j = i-1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

void PrintArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d \t", arr[i]);
	}
	return;
}
int main()
{
	int arr[] = {25, 10, 6, 1, 7, 30};
	int n = sizeof(arr)/ sizeof(arr[0]);
	printf("Array before sorting is:\n");
	PrintArray(arr, n);
	InsertionSort(arr, n);
	printf("\nArray after sorting is:\n");
	PrintArray(arr, n);
	return 0;
}
