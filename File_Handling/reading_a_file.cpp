#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp = fopen("FileHandling.txt", "r");
	char ch;
	if(fp == NULL)
	{
		printf("Error in opening the file!");
		return 1;
	}
	while((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
