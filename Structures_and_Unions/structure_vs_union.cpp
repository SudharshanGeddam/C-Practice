#include<stdio.h>
struct Marks
{
	int subject_id;
	int marks_obtained;
};
union Student
{
	int student_id, student_mobile;
};
int main()
{
	struct Marks marks;
	union Student student;
	printf("Enter the student_id: ");
	scanf("%d", &student.student_id);
	printf("Enter the student mobile: ");
	scanf("%d", &student.student_mobile);
	printf("Enter the subject id: ");
	scanf("%d", &marks.subject_id);
	printf("Enter the marks_obtained: ");
	scanf("%d", &marks.marks_obtained);
	//Note: Union can hold only one value at a time. While executing this program the data entered for student_mobile is held by both student_id and student_mobile. Since it does not work as well.
	printf("\nStudent ID: %d\nStudent Mobile: %d\nSubject ID: %d\nMarks Obtained:%d\n", student.student_id, student.student_mobile, marks.subject_id, marks.marks_obtained);
	return 0;
}
