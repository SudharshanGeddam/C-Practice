//Notes: calloc() -> continous memory allocation.
//It allocates memory in multiple blocks of size n.
//It automatically initialize the values to zero whereas malloc initialize them with 
//garbage values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[30], *ptr, n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	ptr = (int*)calloc(n, sizeof(int));
	printf("Enter the elements into the array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", (ptr+i));
	}
	printf("\nThe entered elements are:\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr+i));
	}
	free(ptr);
	return 0;
	
}
