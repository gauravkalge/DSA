/**** PROGRAM FOR CIRCULAR QUEUE ****/

#include<stdio.h>
#include<conio.h>
void main()
{
 int rear=-1,front=-1,i,ch,data[5],x;
 clrscr();
lable:
    printf("\n\nEnter choice:\n1.Insert\n2.Delete\n3.Print\n4.Quit\n");
    scanf("%d",&ch);
 switch(ch)
 {
case 1:
	printf("Enter number:");
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
	printf("\n");
   for(i=front;i!=rear;i=(i+1)%5)
   {
	printf("%d ",data[i]);
   }
	printf("%d",data[rear]);
   }
   }
 break;
case 2:
   if(rear==-1)
   {
	printf("Queue is empty");
   }
   else
   {
	x=data[front];
	if(rear==front)
   {
	front=-1;
	rear=-1;
   }
   else
   {
	front=(front+1)%5;
	printf("Deleted number =%d",x);
	printf("\nFront=%d and Rear=%d",front,rear);
	 printf("\n");
   for(i=front;i!=rear;i=(i+1)%5)
   {
	printf("%d ",data[i]);
   }
	printf("%d",data[rear]);
   }
   }

break;
case 3:
	printf("\n");
   for(i=front;i!=rear;i=(i+1)%5)
   {
	printf("%d ",data[i]);
   }
	printf("%d",data[rear]);
   break;
case 4:exit(0);
default:printf("\nInvalid choice");
  }
  goto lable;
getch();
}

















































































































































































































































































































































