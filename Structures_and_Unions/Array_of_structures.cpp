#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int roll_no, id;
};
int main()
{
	struct student students[3];
	for(int i = 0; i < 3; i ++)
	{
		printf("Enter the name of student %d: ", i);
		scanf("%s", students[i].name);
		printf("Enter the roll_no of student %d: ", i);
		scanf("%d", &students[i].roll_no);
		printf("Enter the id of student %d: ", i);
		scanf("%d", &students[i].id);
	}
	for(int i = 0; i < 3; i++)
	{
		printf("\nStudent %d name is: %s ", i, students[i].name);
		printf("\nStudent %d roll_no is: %d", i, students[i].roll_no);
		printf("\nStudent %d id is: %d", i, students[i].id);
	}
	return 0;
}
