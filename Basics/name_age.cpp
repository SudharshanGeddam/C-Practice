#include<stdio.h>
int main()
{
	int age;
	char name[50];
	printf("Enter your name: ");
	scanf("%s",&name);
	printf("\nEnter you age: ");
	scanf("%d", &age);
	printf("Hello! %s welcome.",name);
	printf("Great!You are %d years old.",age);
	return 0;
}
