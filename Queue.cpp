#include<stdio.h>
#define max 100
int queue[max];
int front=-1;
int rear=-1;
void enqueue()
{
	int x;
	if(rear==max-1)
	{
		printf("Queue is full.");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("Enter the number:");
		scanf("%d",&x);
		rear=rear+1;
		queue[rear]=x;
	}
}
void dequeue()
{
	int y;
	if(front>rear)
	{
		printf("Queue is empty");
	}
	else 
	{
		y=queue[front];
		front=front+1;
		printf("Number deleted is %d \n",y);
	}
	
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("The Queue is \n");
		for(i=front;i<=rear;i++)
		{
			printf("%d \n",queue[i]);
		}
	}
}
main()

{
	int a;
	while(1)
	{
	
    	printf("Welcome to Stack Program.\n");
    	printf("\n");
    	printf("1.Enqueue.\n");
	    printf("2.Dequeue.\n");
        printf("3.Display.\n");
        printf("\n");
	    printf("Enter your choice:");
    	scanf("%d.\n",&a);
    	
	 switch(a)
     {
	   case 1:
	      enqueue();
	      break;
	   case 2:
	      dequeue();
	      break;
	   case 3:
	      display();
	      break;
	   default:
		 printf("Entered wrong number\n");
		 break;
     }
    }
}

