#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,f;
scanf("%d",&a);
for(i=2;i<a;i++)
{
    if(a%i==0)
    {
        f=1;
        break;
        printf("num is not prime");
    }
    else
    {
        f=0;
        printf("num is prime");
    }
}
getch();
}
