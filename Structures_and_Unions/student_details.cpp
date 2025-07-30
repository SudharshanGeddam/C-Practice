#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int roll_no;
};
int main()
{
	struct student s1;
	printf("Enter the student name: ");
	scanf("%s", s1.name);
	printf("Enter the student id: ");
	scanf("%d", &s1.roll_no);
	printf("\nStudent name: %s\nStudent id: %d", s1.name, s1.roll_no);
	return 0;
}

