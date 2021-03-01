/**** PROGRAM FOR FACTORIAL ****/

#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
 int num;
 clrscr();
 printf("\nEnter number:");
 scanf("%d",&num);
 printf("Factorial of %d is %d ",num,fact(num));
 getch();
}
int fact(int num)
{
 if(num==0)
  return 1;
 return(num*fact(num-1));
}