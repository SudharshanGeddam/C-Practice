#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
	printf("Entered character is a vowel.");
	else
	printf("Entered character is a consonant.");
	return 0;
}
