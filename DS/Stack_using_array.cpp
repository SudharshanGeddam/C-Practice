#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top = -1;
void Push()
{
	int num;
	if(top == N-1)
	{
		printf("\nOverflow condition occurred. Can't insert the data!\n");
	}
	else
	{
		printf("\nEnter data you want to insert: ");
		scanf("%d", &num);
		top++;
		stack[top] = num;
	}	
	return;
}
void Pop()
{
	int item;
	if(top == -1)
	printf("\nUnderflow condition occurred. No elements present in the stack.\n");
	item = stack[top];
	top--;
	printf("\nPopped/Deleted element is: %d\n", item);
	return;
}
void Peek()
{
	if(top == -1)
	printf("\nNo elements in the stack.");
	printf("\nTopmost element in the stack is: %d\n", stack[top]);
	return;
}
void Display()
{
	if(top == -1)
	printf("No elements in the stack.");
	printf("Elements in stack are:\n");
	for(int i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
	return;
}
int main()
{
	int opt;
	do
	{
		printf("Choose operation to perform:\n1.Push\n2.Pop\n3.Peek\n4.Display\n0.Exit\n");
		printf("\nEnter option:\n");
		scanf("%d", &opt);
		switch (opt)
		{
			case 1:
				Push();
				break;
			case 2:
				Pop();
				break;
			case 3:
				Peek();
				break;
			case 4:
				Display();
				break;
			default:
				printf("\nProgram exited.");
		}
	} while(opt != 0);
	return 0;
}
