#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next, *prev;
	int data;
};

struct node *head = NULL;
struct node *newnode, *temp;
int count;
void CreateList()
{
	int choice = 1;
	while(choice)
	{
		newnode = (struct node*) malloc (sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		newnode->prev = NULL;
		if(head == NULL)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			newnode->prev = temp;
			temp = newnode;
		}
		printf("\nDo you want to continue to insert the data?[0 = No, 1 = Yes]: ");
		scanf("%d", &choice);
	}
}

void DisplayList()
{
	temp = head;
	if(temp == NULL)
	{
		printf("List is empty.");
		return;
	}
	while(temp != 0)
	{
		printf("%d -> ", temp->data);
		count++;
		temp = temp->next;
	}
	printf("NUll\n");
}
void InsertAtBeginning()
{
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("Enter data to insert: ");
	scanf("%d", &newnode->data);
	newnode->next = newnode->prev = NULL;
	temp = head;
	if(temp == NULL)
	printf("List is Empty");
	newnode->next = temp;
	temp->prev = newnode;
	head = newnode;
	printf("\nData after insertion at beginning is: ");
	DisplayList();
}
void InsertAtEnd()
{
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("Enter data to insert: ");
	scanf("%d", &newnode->data);
	newnode->next = newnode->prev = NULL;
	temp = head;
	if(temp == NULL)
	printf("List is Empty");
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	temp = newnode;
	printf("\nData after insertion at end is: ");
	DisplayList();	
}
void InsertAtSpecifiedPosition()
{
	int pos, i = 1;
	printf("Enter the position to insert data: ");
	scanf("%d", &pos);
	if(pos < 0 || pos > count)
	{
		printf("Invalid Position");
		return;
	}
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("Enter data to insert: ");
	scanf("%d", &newnode->data);
	newnode->next = newnode->prev = NULL;
	temp = head;
	if(temp == NULL)
	printf("List is Empty");
	while(i < pos-1)
	{
		temp = temp->next;
		i++;
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;
	printf("\nData after insertion at end is: ");
	DisplayList();
}
int main()
{
	int choice1;
	CreateList();
	DisplayList();
	printf("\nDo you want to insert newnodes?(0 = No, 1 = Yes): ");
    scanf("%d", &choice1);
    if(choice1 == 1)
    {
    	int opt;
    	printf("\nWhere you want to insert the newnode?[At Beginning = 1 or At End = 2 or At specified position = 3]:");
    	scanf("%d", &opt);
    	if(opt == 1)
    	{
    		InsertAtBeginning();
		}
		else if(opt == 2)
		{
			InsertAtEnd();
		}
		else if(opt == 3)
		{
			InsertAtSpecifiedPosition();
		} 
		else
		{
			printf("Invalid position\n");
		}
	} 
	return 0;
}


