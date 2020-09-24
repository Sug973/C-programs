#include<stdio.h>
#include<conio.h>

void main()
{
int n=9,x=5,y=5,i,j;
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	    if(j==(n-x+1)|| j==x)
	    {
    		printf("*");
    	}
    	else
    	{
    		printf(" ");
    	}
	}
	if(i<=n/2)
	x--;
	else
	x++;

	printf("\n");
}
getch();
}