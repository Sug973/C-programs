#include<stdio.h>
#include<conio.h>

void main()
{
int s=4,p=1,i,j,k;
for(i=4;i>=-4;i--)
{
	for(j=1;j<=abs(i);j++)
	{
		printf(" ");
	}
	p=1;
	for(k=4;k>=abs(i);k--)
	{
		printf("%d",p);
		
			
		if(i>=0)
		{
		     p++;
		}
		else
		{
			p+=1;
		}
	}
	printf("\n");
}
getch();
}