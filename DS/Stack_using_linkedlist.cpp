#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *top = NULL;
struct node *newnode, *temp;
void Push()
{
	int num;
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("\nEnter data you want to insert: ");
	scanf("%d", &newnode->data);
	newnode->link = top;
	top = newnode;
	return;
}
void Pop()
{
	temp = top;
	if(top == NULL)
	printf("\nUnderflow condition occurred. No elements present in the stack.\n");
	top = temp->link;
	printf("\nPopped/Deleted element is: %d\n", temp->data);
	free(temp);
	return;
}
void Peek()
{
	if(top == NULL)
	printf("\nNo elements in the stack.");
	printf("\nTopmost element in the stack is: %d\n", top->data);
	return;
}
void Display()
{
	temp = top;
	if(top == NULL)
	printf("No elements in the stack.");
	printf("Elements in stack are:\n");
	while(temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->link;
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
