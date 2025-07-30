#include<stdio.h>
#include<string.h>
struct Programs
{
	char program_name[100];
};
struct Students
{
	int student_id;
	char student_name[100];
	struct Programs program;
};
int main()
{
	struct Students students[2];
	for(int i = 0; i < 2; i++)
	{
		printf("Enter the id of student %d: ", i);
		scanf("%d", &students[i].student_id);
		printf("Enter the name of student %d: ", i);
		scanf("%s", students[i].student_name);
		printf("Enter the program assaigned to student %d: ", i);
		scanf("%s", students[i].program.program_name);
	}
	for(int i = 0; i < 2; i++)
	{
		printf("\n%d Student id is: %d", i, students[i].student_id);
		printf("\n%d Student name is: %s", i, students[i].student_name);
		printf("\nProgram assaigned to %d student is: %s", i, students[i].program.program_name);
	}
	return 0;
}
