/**** PROGRAM FOR SELECTION SORT ****/

#include <stdio.h>
#include <conio.h>
void main( )
{
	int a[20];
	int n,i,j,temp,min;
	clrscr( ) ;
	printf("Enter Last position of array:");
	scanf("%d",&n);
	printf("Enter number:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	min=a[i];
	  for(j=i+1;j<n;j++)
	  {
		if(min>a[j])
		{
		temp=min;
		min=a[j];
		a[j]=temp;
		}
		a[i]=min;
	  }

	}
	printf("Sorted list\n");
	for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
	}
	getch();
}