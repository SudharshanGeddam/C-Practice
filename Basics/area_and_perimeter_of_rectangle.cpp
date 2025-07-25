#include<stdio.h>
int main()
{
	int length, breadth;
	double area, perimeter;
	printf("Enter the length of the rectangle: ");
	scanf("%d", &length);
	printf("Enter the breadth of the rectangle: ");
	scanf("%d", &breadth);
	area = length*breadth;
	perimeter = 2* (length+breadth);
	printf("\nArea of the rectangle is: %.2lf", area);
	printf("\nPerimeter of the rectangle is: %.2lf", perimeter);
	return 0;
}
