//Notes: realloc() -> used to reallocate the memory which is previously allocated my malloc or calloc.
//we are not sure about the whether it resize the same block that the previous holds or allocates the
//new block and copy the content from previous block.
//Used to increase/decrease the the memory allocated.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[30], *ptr, n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	ptr = (int*) malloc (n*sizeof(int));
	printf("Enter elements into the array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", (ptr+i));
	}
	printf("\nEntered elements are:\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr+i));
	}
	printf("Update the value of n: ");
	scanf("%d", &n);
	printf("\nBase address before resizing is: %zu", ptr);
	int *ptr1 = (int*) realloc (ptr, n*sizeof(int));
	printf("\nBase address after resizing is: %zu", ptr1);
	free(ptr);
	free(ptr1);
	return 0;
}
