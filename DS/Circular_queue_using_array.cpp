#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front  = -1;
int rear = -1;

void Display()
{
	int i = front;
	if(front == -1 && rear == -1)
	printf("\nQueue is empty.");
	else
	{
		printf("\nQueue elements are: ");
		while(i != rear)
		{
			printf("\n%d\n", queue[i]);
			i = (i+1)%N;
		}
		printf("\n%d\n", queue[i]);
	}
	return;
}

void Enqueue()
{
	int data;
	if((rear+1)%N == front)
	{
		printf("\nOverflow Condition occurred. Can't insert data.\n");
	}
	else
	{
		printf("\nEnter the data you want to insert:");
		scanf("%d", &data);
		if(front == -1 && rear == -1)
		{
			front = rear = 0;
			queue[rear] = data;
		}
		else
		{
			rear = (rear+1)%N;
			queue[rear] = data;
		}
	}
	Display();
}

void Dequeue()
{
	if(front == -1 && rear == -1)
	{
		printf("\nUnderflow condition.Queue is empty\n");
	}
	else
	{
		int item = queue[front];
		front = (front+1)%N;
		printf("\nDeleted item is: %d\n", item);
	}
	Display();
}

void Peek()
{
	if(front == -1 && rear == -1)
	{
		printf("\nUnderflow condition.Queue is empty\n");
	}
	else
	{
		int item = queue[front];
		printf("\nFirst item in queue is: %d\n", item);
	}
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

