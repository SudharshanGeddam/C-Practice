#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp[100];
	printf("Enter a string: ");
	scanf("%s", &str);
	strcpy(temp, str);
	strrev(str);
	if(strcmp(str, temp) == 0)
	printf("Entered string is a palindrome:%s",temp);
	else
	printf("Entered string is not a palindrome:%s", temp);
	return 0;
}
