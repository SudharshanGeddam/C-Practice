#include<stdio.h>
int main()
{
	int num, sum= 0, rem= 0, temp= 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0)
	{
		rem = num % 10;
		sum = sum + (rem*rem*rem);
		num = num/10;
	}
	if(sum == temp)
	printf("Entered %d is Armstrong number.", temp);
	else
	printf("Entered %d is not Armstrong number.", temp);
	return 0;
}
