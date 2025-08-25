#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next, *prev;
	int data;
};

struct node *head = NULL;
struct node *tail = NULL;
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
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			newnode->prev = tail;
			tail = newnode;
			tail->next = head;
			head->prev = tail;
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
	while(temp->next != head)
	{
		printf("%d -> ", temp->data);
		count++;
		temp = temp->next;
	}
	printf("%d -> ", temp->data);
	printf("%d", temp->next->data);
	printf("\n");
}

void InsertAtBeginning()
{
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("Enter data to insert: ");
	scanf("%d", &newnode->data);
	newnode->next = newnode->prev = NULL;
	if(head == NULL)
	printf("List is Empty");
	newnode->next = head;
	newnode->prev = tail;
	head->prev = newnode;
	tail->next = newnode;
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
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
		tail->next = head;
	}
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

void DeleteFromBeginning()
{
	temp = head;
	head = temp->next;
	head->prev = tail;
	tail->next = head;
	free(temp);
	printf("\nList after deletion is:\n");
	DisplayList();
}

void DeleteAtEnd()
{
	struct node *temp1;
	temp = head;
	while(temp->next != head)
	{
		temp = temp->next;
		temp1 = temp->prev;
	}	
	temp1->next = head;
	head->prev = temp1;
	free(temp);
	printf("\nList after deletion is:\n");
	DisplayList();
}

void DeleteAtSpecifiedPosition()
{
	temp = head;
	int pos, i = 1;
	printf("\nEnter the position where you want to delete the node: ");
	scanf("%d", &pos);
	if(pos < 0 || pos > count)
	printf("\nInvalid position");
	while(i < pos)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	printf("\nList after deletion is:\n");
	DisplayList();
}

void ReverseList()
{
	struct node *currentnode, *nextnode;
	currentnode = head;
	while(currentnode != head)
	{
		nextnode = currentnode->next;
		currentnode->next = currentnode->prev;
		currentnode->prev = nextnode;
		currentnode = nextnode;
	}
    head = head->prev;
	printf("\nList after reversing:\n");
	DisplayList();
}

int main()
{
	int choice1,choice2,opt;
	CreateList();
	DisplayList();
	printf("\nDo you want to insert newnodes?(0 = No, 1 = Yes): ");
    scanf("%d", &choice1);
    if(choice1 == 1)
    {
    	
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
	else if(choice1 == 0)
	{
		printf("\nDo you want to delete the nodes?[0 = No, 1 = Yes]:");
		scanf("%d", &choice2);
		if(choice2 == 1)
		{
			printf("\nWhere you want to delete the node?[At Beginning = 1 or At End = 2 or At specified position = 3]:");
    		scanf("%d", &opt);
	    	if(opt == 1)
	    	{
	    		DeleteFromBeginning();
			}
			else if(opt == 2)
			{
				DeleteAtEnd();
			}
			else if(opt == 3)
			{
				DeleteAtSpecifiedPosition();
			} 
			else
			{
				printf("Invalid position\n");
			}
		} 
		else if(choice2 == 0)
		{
			int opt2;
			printf("\nDo you want to reverse the list?[0 = No, 1 = Yes]: ");
			scanf("%d", &opt2);
			if(opt2 == 1)
			ReverseList();
		}
		
	}
	else
	{
		printf("Invalid option");
	}
	return 0;
}


