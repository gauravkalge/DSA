/**** PROGRAM FOR STACK ****/

#include<stdio.h>
#include<conio.h>
main()
{
 int top=-1;
  int data[5];
int ch,i,x;
clrscr();
lable:
printf("\n\nEnter choice \n1.Push\n2.Pop\n3.Print\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(top>=5)
{
printf("Stack Overflow");
}
else
{
printf("Enter number:");
scanf("%d",&x);
top++;
data[top]=x;
printf("Top=%d",top);
}
break;
case 2:
if(top<0)
{
printf("Stach underflow");
}
else
{
printf("\nPop element:%d",data[top]);
printf("\nTop=%d",top-1);
data[top]=NULL;
top--;
}
break;
case 3:
printf("\n");
for(i=top;i>-1;i--)
{
printf("%d ",data[i]);
}
break;
case 4:exit();
default :printf("\nInvalid choice");
}
goto lable;
getch();
}
