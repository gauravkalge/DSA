/**** PROGRAM FOR BINARY SEARCH ****/

#include <stdio.h>
#include <conio.h>
void main( )
{
	int a[20];
	int mid,min,max,key,n,i,j,temp;
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
	  for(j=0;j<n-i;j++)
	  {
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	  }
	}
	printf ( "Enter number to search: " ) ;
	scanf ( "%d", &key) ;
	min=0,max=n-1;
	mid=(min+max)/2;
	while(min<=max && a[mid]!=key)
	{
		if(key<a[mid])
		max=mid-1;
		else
		min=mid+1;
	mid=(min+max)/2;
	}
	if(a[mid]==key)
	{
	printf("Number is found");
	}
	else
	{
	printf("Number is not found");
	}
	getch();
}
