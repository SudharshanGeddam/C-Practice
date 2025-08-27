#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
struct node *newnode, *temp;

void Display()
{
	if(front == NULL && rear == NULL)
	{
		printf("\nQueue is empty.\n");
	}
	else if(front == rear)
	{
		printf("\nOnly one element in the queue: %d\n", front->data);
	}
	else
	{
		temp = front;
		printf("\nQueue elements are: ");
		while(temp != NULL)
		{
			printf("\n%d\n", temp->data);
			temp = temp->next;
		}
	}
	return;
}

void Enqueue()
{
	newnode = (struct node*) malloc (sizeof(struct node));
	printf("\nEnter the data you want to insert: ");
	scanf("%d", &newnode->data);
	newnode->next = NULL;
	if(front == NULL && rear == NULL)
	{
		front = rear = newnode;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
	}
	printf("\nQueue after insertion is:\n");
	Display();
}

void Dequeue()
{
	if(front == NULL && rear == NULL)
	{
		printf("\nQueue is empty.\n");
	}
	else
	{
		temp = front;
		front = front->next;
		printf("\nDeleted element in the queue is:%d\n", temp->data);
		free(temp);
	}
}

void Peek()
{
	if(front == NULL && rear == NULL)
	{
		printf("\nQueue is empty.\n");
	}	
	printf("\nFirst element in the queue is: %d\n", front->data);
}

int main()
{
	int opt;
	do
	{
		printf("Choose operation to perform:\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n0.Exit\n");
		printf("\nEnter option:\n");
		scanf("%d", &opt);
		switch (opt)
		{
			case 1:
				Enqueue();
				break;
			case 2:
				Dequeue();
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
