#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter the size of rows: ");
	scanf("%d", &n1);
	printf("\nEnter the size of columns: ");
	scanf("%d", &n2);
	int arr1[n1][n2],arr2[n1][n2], sum [n1][n2];
	if(n1 != n2)
	{
		printf("Row size is not equal to column size.Please try again later.");
		return 1;
	}
	printf("\nEnter the elements into first matrix: ");	
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("\nEnter the elements into second matrix: ");
	for(int i = 0; i <n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	printf("\nPrinting the first matrix elements: ");
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			printf("\narr1[%d][%d] = %d\n", i, j, arr1[i][j]);
		}
	}
	printf("\nPrinting the second array elements: ");
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			printf("\narr2[%d][%d] = %d\n", i, j, arr2[i][j]);
		}
	}
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			sum[i][j] = arr1[i][j]+arr2[i][j];
		}
	}
	printf("\nAddition of two arrays is: ");
	for (int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			printf("\n%d\n",sum[i][j]);
		}
	}
	return 0;
}
