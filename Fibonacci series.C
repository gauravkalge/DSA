/**** PROGRAM FOR FIBONACCI SERIES ****/

#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
 int i,n;
 clrscr();
 printf("\nEnter no. of items:");
 scanf("%d",&n);
 printf("Fibonacci series:");
 for(i=0;i<n;i++)
 {
 printf("%d ",fib(i));
 }
 getch();
}
int fib(int i)
{
 if(i==0)
  return -1;
 if(i==1)
  return 1;
 return fib(i-1)+fib(i-2);
}