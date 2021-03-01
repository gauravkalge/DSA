/**** PROGRAM FOR INSERTION SORT ****/

#include <stdio.h>
#include <conio.h>
void main( )
{
	int a[20];
	int n,i,j,k,temp;
	clrscr( ) ;
	printf("Enter Last position of array:");
	scanf("%d",&n);
	printf("Enter number:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
for ( i = 1 ; i <= n ; i++ )
	{
		for ( j = 0 ; j < i ; j++ )
		{
			if ( a[j] > a[i] )
			{
				temp = a[j] ;
				a[j] = a[i] ;

				for ( k = i ; k > j ; k-- )
					a[k] = a[k - 1] ;

				a[k + 1] = temp ;
			}
		}
	}
	printf("Sorted list\n");
	for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
	}
	getch();
}