/**** PROGRAM FOR LINEAR SEARCH ****/
/*Linear search in an unsorted array. */

#include <stdio.h>
#include <conio.h>
void main( )
{
	int a[20];
	int i, key,temp=0,n;
	clrscr( ) ;
	printf("Enter Last position of array:");
	scanf("%d",&n);
	printf("Enter number:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf ( "Enter number to search: " ) ;
	scanf ( "%d", &key) ;
	for ( i = 0 ; i <= n ; i++ )
	{
		if (a[i]==key )
		{
		temp=1;
			break ;
		}
	}

	if ( temp==1 )
		printf ( "%d is present in the array.",key) ;
	else
		printf ( "%d is not present in the array,",key);

	getch( ) ;
}
