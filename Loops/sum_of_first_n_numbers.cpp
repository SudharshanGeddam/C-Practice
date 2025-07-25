#include<stdio.h>
int main()
{
	int range,sum =0;
	printf("Enter a range value: ");
	scanf("%d", &range);
	for(int i = 1; i <= range; i++)
	{
		sum = sum+i;
	}
	printf("Sum of %d numbers is %d: ",range,sum);
	return 0;
}
