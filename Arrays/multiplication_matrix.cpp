#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter the number of rows: ");
	scanf("%d", &n1);
	printf("Enter the number of coloumns: ");
	scanf("%d", &n2);
	if(n1 != n2)
	{
		printf("Rows not equal to columns.");
		printf("\nExiting...");
		return 1;
	}
	int arr1[n1][n2], arr2[n1][n2], result[n1][n2];
	printf("Enter first matrix elements: ");
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("\nEnter the second matrix elements: ");
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			result[i][j] = 0;
		}
	}
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			for(int k = 0; k < n1; k++)
			{
				result[i][j] += arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("Product of two matrixes is: ");
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j< n2; j++)
		{
			printf("%d\n", result[i][j]);
		}
	}
	return 0;
}
