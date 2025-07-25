#include<stdio.h>
int main()
{
	int num, rev = 0, rem = 0, temp = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0)
	{
		rem = num % 10;
		rev = (rev*10) + rem;
		num = num / 10;
	}
	if(rev == temp)
	printf("Entered %d is a palindrome", temp);
	else
	printf("Entered %d is not a palindrome.", temp);
	return 0;
}
