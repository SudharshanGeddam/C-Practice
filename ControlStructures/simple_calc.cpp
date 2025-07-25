#include<stdio.h>
int main()
{
	int num1, num2, ch;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("1.Addition \n2.Subtraction \n3. Division \n4. Multiplication \n5. Remainder\nEnter the choice from above following: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: 
		printf("Addition of two numbers is: %d", (num1+num2));
		break;
		case 2: 
		printf("Subtraction of two numbers is: %d", (num1-num2));
		break;
		case 3: 
		printf("Division quoteint of two numbers is: %d", (num1/num2));
		break;
		case 4: 
		printf("Multiplication of two numbers is: %d", (num1*num2));
		break;
		case 5: 
		printf("Remainder of two numbers is: %d", (num1%num2));
		break;
		default:
			printf("Invalid option choosen! Please try again.");
	}
	return 0;
}
