#include<stdio.h>
int fibnocci(int num)
{
	if(num == 0 || num == 1) return num;
	return(fibnocci(num-1)+fibnocci(num-2));
	
}
int main()
{
	int terms;
	printf("Enter the number of terms: ");
	scanf("%d", &terms);
	for(int i = 0; i < terms; i++)
	printf("%d\t", fibnocci(i));
	return 0;
}
