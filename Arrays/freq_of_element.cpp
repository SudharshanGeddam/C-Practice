#include<stdio.h>
int main()
{
	int n, count;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	printf("Enter the elements into the array:\n");
	int freq[n], arr[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		freq[i] = -1;
	}
	for(int i = 0; i < n; i++)
	{
		if(freq[i] == 0)
		continue;
		count = 1;
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] == arr[j])
			{	
				count += 1;
				freq[j] = 0;
			}
		}
		
		freq[i] = count;
	}
	int found = 0;
	for(int i = 0; i < n; i++)
	{
		if(freq[i] > 1)
		{
			printf("%d occurs %d times.\n", arr[i], freq[i]);
			found = 1;
		}
	}
	if(!found)
	{
		printf("No repeated elements.");
	}
	return 0;
}
