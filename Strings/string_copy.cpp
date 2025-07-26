#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	printf("Enter a string: ");
	scanf("%s", &str1);
	printf("Entered string is:%s",str1);
	printf("\nCopying the string from str1 to str2:%s",strcpy(str2, str1));
	return 0;
}
