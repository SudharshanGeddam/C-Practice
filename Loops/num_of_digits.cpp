#include<stdio.h>
int main()
{
	int num, rem = 0, count= 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	while(num != 0)
	{
		rem = num % 10;
		count += 1;
		num = num / 10;
	}
	if(count == 1)
	printf("Number of digits in given number is: %d", count);
	else
	printf("Number of digits in given number are: %d", count);
	return 0;
}
