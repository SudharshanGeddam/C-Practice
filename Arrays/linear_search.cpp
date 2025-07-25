#include<stdio.h>
int main()
{
	int arr[5] = {15,20,4,36,98};
	int target, found = 0;
	printf("Array elements are:\n");
	for(int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d", &target);
	for(int i = 0; i < 5; i++)
	{
		if(arr[i] == target)
		{
			printf("Target %d found at index %d", arr[i], i);
			found = 1;
			break;
		}
	}
	if(!found)
	{
		printf("Target not founded.");
	}
	return 0;
}
