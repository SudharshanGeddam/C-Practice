#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *source = fopen("FileHandling.txt", "r");
	FILE *target = fopen("CopiedFile.txt", "w");
	char ch;
	if(source == NULL || target == NULL)
	{
		printf("Error in opening files!");
		return 1;
	}
	while((ch = fgetc(source)) != EOF)
	{
		fputc(ch, target);
	}
	printf("Successfully copied...");
	fclose(source);
	fclose(target);
	return 0;
}
