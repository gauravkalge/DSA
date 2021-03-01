/**** PROGRAM FOR GCD (GREATEST COMMON DIVISOR) ****/

#include<stdio.h>
#include<conio.h>
int GCD(int,int);
void main()
{
int a,b;
clrscr();
printf("Enter two number for GSD:");
scanf("%d%d",&a,&b);
printf("GSD of %d and %d is %d:",a,b,GCD(a,b));
getch();
}
int GCD(int a,int b)
{
   if(a<b)
      return(GCD(b,a));
   if(a%b==0)
      return b;
   return(GCD(b,a%b));
}