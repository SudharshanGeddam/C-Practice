#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *newnode, *temp;
int count = 0;

void CreateList() {
    int choice = 1;

    while (choice == 1) {
        newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
        printf("Do you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    }
}
void DisplayList() {
    temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("The data present in the nodes are: ");
    while (temp->next != head) {
        printf("%d -> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("%d -> ", temp->data);
    printf("%d", temp->next->data);
    printf("\n");
}
void InsertAtBeginning()
{
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("\nEnter the data you want to insert: ");
	scanf("%d", &newnode->data);
	if(head != NULL)
	{
		newnode->next = head;
		head = newnode;
		tail->next = newnode;
	}
	printf("\nData after insertion:\n");
	DisplayList();
}
void InsertAtEnd()
{

	if(head == NULL)
	{
		printf("List is empty.");
		return;
	}
	newnode = (struct node*) malloc(sizeof(struct node));
	printf("\nEnter the data you want to insert: ");
	scanf("%d", &newnode->data);
	newnode->next = NULL;
	if(head == newnode)
	printf("Only one node present : %d", newnode->data);
	else
	{
		tail->next = newnode;
		newnode->next = head;
	}
	printf("\nData after insertion:\n");
	DisplayList();
}
void InsertAtSpecifiedPosition()
{
	struct node *temp = head;
	int pos, i = 1;
	printf("\nEnter the position where you want to insert: ");
	scanf("%d", &pos);
	if(pos > count)
	{
		printf("\nInvalid position");
	}
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("\nEnter the data you want to insert: ");
	scanf("%d", &newnode->data);
	while(i < pos-1)
	{
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	printf("\nData after insertion:\n");
	DisplayList();
}
void DeleteFromBeginning()
{
	temp = head;
	if(head == NULL)
	{
		printf("No nodes present!");
		free(head);
	}
	head = head->next;
	tail->next = head;
	free(temp);
	printf("\nData after Deletion:\n");
	DisplayList();
}
void DeleteAtEnd()
{
	struct node *prev;
	temp = head;
	while(temp->next != head)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = head;
	free(temp);
	printf("\nData after Deletion:\n");
	DisplayList();
}
void DeleteAtSpecifiedPosition()
{
	temp = head;
	int pos,i = 1;
	struct node *nextnode;
	printf("\nEnter the position where you want to delete: ");
	scanf("%d", &pos);
	if(pos>count)
	{
		printf("\nInvalid Position");
	}
	while(i<pos)
	{
		temp = temp->next;
		i++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	printf("\nData after Deletion:\n");
	DisplayList();
}

void ReverseList()
{
	struct node  *nextnode, *prevnode, *currentnode;
	currentnode = head;
	prevnode = tail;
	do {
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    } while (currentnode != head);
    tail = head;
    head = prevnode;
	DisplayList();
}
int main() {
	int choice1, choice2, opt;
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

