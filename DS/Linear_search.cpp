#include<stdio.h>
int main()
{
	int arr[8] = {14, 25, 36, 89, 74, 45, 96, 47};
	int data, found = 0;
	printf("Enter the data you want to search in array: ");
	scanf("%d", &data);
	for(int i = 0; i < 7; i++)
	{
		if(arr[i] == data)
		{
			printf("\nData found at position: %d", i);
			found = 1;
			break;
		}
	}
	if(found == 0)
	{
		printf("\nSorry element can't found");
	}
	return 0;
}
