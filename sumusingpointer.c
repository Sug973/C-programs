#include<stdio.h>
#include<conio.h>
void main()
{
    int a ,b,*p,*q,c;
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf(" sum is %d",c);
    getch();

}
