#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int length = 0;
	printf("Enter a string: ");
	scanf("%s", &ch);
	while(ch[length] != '\0')
	{
		length++;	
	}	
	printf("\nLength of the string is:%d", length);
	return 0;
}
