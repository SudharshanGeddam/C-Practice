//Notes: Dynamic Memory allocation using malloc()
//malloc() -> it is widely used for structures. 
//It takes only required size of the data type mentioned.
//It allocates memory from heap.
//free() -> It is used to remove the allocated space/memory.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *ptr;
	printf("Enter the total number of elements: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n*sizeof(int));
	if(ptr == NULL)
	{
		printf("No memory allocated.");
	}
	else
	{
		printf("Memory allocated for %d elements is %zu bytes.\n", n, n*sizeof(int));
		printf("Enter the elements: ");
		for(int i = 0; i < n; i++)
		{
			scanf("%d", (ptr+i));
		}
		printf("\nElements entered are: ");
		for(int i = 0; i < n; i++)
		{
			printf("%d\n", *(ptr+i));
		}
		free(ptr);
	}
	return 0;
}
