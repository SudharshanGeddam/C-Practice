#include<stdio.h>
int main()
{
	FILE *fp = fopen("FileHandling.txt", "a");
	if(fp == NULL)
	{
		printf("Error in opening the file!");
		return 1;
	}
	fprintf(fp, "Hello! My name is Sudharshan.\n");
	fclose(fp);
	printf("Appended successfully.");
	return 0;
}
