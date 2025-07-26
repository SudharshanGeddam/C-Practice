#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	char vowels[] = "AEIOUaeiou";
	int vowelCount = 0, consonantCount = 0, digitCount = 0, spaceCount = 0;
	for(int i = 0; i < strlen(str); i++)
	{
		char ch = str[i];
		if(strchr(vowels, ch))
		{
			vowelCount++;
		}
		else if(isdigit(ch))
		{
			digitCount++;
		}
		else if(isspace(ch))
		{
			spaceCount++;
		}
		else if(isalpha(ch))
		{
			consonantCount++;
		}
	}
	printf("Number of vowels in entered string is: %d", vowelCount);
	printf("\nNumber of consonants in entered string is: %d", consonantCount);
	printf("\nNumber of digits in entered string is: %d", digitCount);
	printf("\nNumber of space in entered string is: %d", spaceCount);
	return 0;
}
