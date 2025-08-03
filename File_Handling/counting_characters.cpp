#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp = fopen("FileHandling.txt", "r");
	int characters = 0, words = 0, lines = 0;
	char ch;
	int flag = 0;
	if (fp == NULL)
	{
		printf("Error in opening the file!");
		return 1;
	}
	while((ch = fgetc(fp)) != EOF)
	{
		characters++;
		if(ch == '\n')
		{
			lines++;
		}
		if(isspace(ch))
		{
			flag = 0;
		} else if(flag == 0)
		{
			words++;
			flag = 1;
		}
	}
	fclose(fp);
	printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
	return 0;
}
