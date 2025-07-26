#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s", &str);
	for(int i = 0; i < strlen(str); i++)
	{
		if(islower(str[i]))
		{
			str[i] = toupper(str[i]);
		} 
		else if(isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}
	printf("%s", str);
	
	return 0;
}
