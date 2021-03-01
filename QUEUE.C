/**** PROGRAM FOR QUEUE ****/

#include<stdio.h>
#include<conio.h>
void main()
{
int rear=-1,front=-1,i,ch,data[5],x;
clrscr();
lable:
printf("\n\nEnter choice:\n1.Insert\n2.Delete\n3.Print\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:if(rear>=4)
{
printf("\nQueue overflow");
break;
}
else
{
printf("Enter number:");
scanf("%d",&x);
rear++;
data[rear]=x;
printf("front=%d,rear=%d",front,rear);
}
break;
case 2:
if(front==rear)
{
printf("Queue underflow");
}
else
{
front++;
x=data[front];
printf("Deleted element=%d",x);
printf("\nFront=%d and Rear=%d",front,rear);
}
break;
case 3:
printf("\n");
for(i=front+1;i<=rear;i++)
{
printf("%d ",data[i]);
}
break;
case 4:exit();
break;
default :printf("Invalid choice");
}
goto lable;
getch();
}

