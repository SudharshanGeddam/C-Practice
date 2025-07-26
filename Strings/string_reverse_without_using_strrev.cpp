#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s", &str);
	printf("String entered is: %s", str);
	printf("\nReversed string is: ");
	for(int i = strlen(str); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}
