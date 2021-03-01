/**** PROGRAM FOR CIRCULAR DEQUEUE ****/

#include<stdio.h>
#include<conio.h>
void main()
{
 int rear=-1,front=-1,i,ch,data[5],x;
 clrscr();
 lable:
 printf("\n\nEnter choice:\n1.Insert(rear)\n2.Insert(front)\n3.Delete(front)\n4.Delete(rear)\n5.Print\n6.Quit\nOption:");
 scanf("%d",&ch);
switch(ch)
{
case 1: 	printf("**Insertion from rear**");
		printf("\nEnter number:");
		scanf("%d",&x);
	if((rear+1)%5==front)
	{
		printf("\nQueue is full");
	}
	else
	{
	if(rear==-1)
	{
		rear=front=0;
		printf("Front=%d and Rear=%d",front,rear);
		data[rear]=x;
	}
	else
	{
		rear=(rear+1)%5;
		data[rear]=x;
		printf("Front=%d and Rear=%d",front,rear);
		}
	}
break;
case 2:		printf("**Insertion from front");
		printf("\nEnter number:");
		scanf("%d",&x);
	if(rear==-1)
	{
		front=0;
		rear=0;
		data[0]=x;
		printf("Front=%d and Rear=%d ",front,rear);
		printf("\n");
	}
	else
	{
		front=(front+4)%5;
		data[front]=x;
		printf("Front=%d and Rear=%d ",front,rear);
	}
break;
case 3: printf("**Deletion from front**");
	if(rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		x=data[front];
	if(rear==front)
	{
		front=-1;
		rear=-1;
		printf("\nQueue is empty");
	}
	else
	{
		front=(front+1)%5;
		printf("Deleted number =%d",x);
		printf("\nFront=%d and Rear=%d",front,rear);
	}
	}
break;
case 4: printf("***Deletion from rear***");
		x=data[rear];
	if(front==rear)
	{
		front=rear=-1;
		printf("\nQueue is empty");
	}
	else
	{
		rear=(rear+4)%5;
		printf("\nFront=%d and Rear=%d",front,rear);

	}
break;
case 5:
       if(rear!=-1)
       {
	 i=front;
	 while(i!=rear)
	 {
		printf("\n%d",data[i]);
		i=(i+1)%5;
	}
	printf("\n%d",data[rear]);
	}
	else
	printf("Queue is empty");
      break;
case 6 :	exit(0);
default:	printf("\nInvalid choice");
  }
  goto lable;
getch();
}