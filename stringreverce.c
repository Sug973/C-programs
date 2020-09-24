#include<stdio.h>
#include<conio.h>

int main()
{
int i,d,a[10],b[10];

for(i=0;i<5;i++)
{
  scanf("%d",&a[i]);
}
  
for(i=4,d=0;i>=0;i--,d++)
{
	b[d]=a[i];
}
for(i=0;i<5;i++)
{
	a[i]=b[i];
	printf("%d",a[i]);
}
return 0;
}