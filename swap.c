#include<stdio.h>
#include<conio.h>

void swap(int *,int *);

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\n%d  \n%d",a,b);
    getch();
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
