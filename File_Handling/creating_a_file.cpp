#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp = fopen("FileHandling.txt", "w");
	if(fp == NULL)
	{
		printf("Error in opening the file!");
		return 1;
	}
	fprintf(fp, "Writing content in the file.\n");
	fprintf(fp, "Sample Data with multilines.\n");
	fprintf(fp, "Hello world!\n");
	printf("Successfully created file and content is added...");
	fclose(fp);
	return 0;
}
