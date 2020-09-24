#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20],*p,b[20];
    int i=0,j;
    p=a;
    while(*p!=NULL)
    {
        i++;
        p++;
    }
    p=a;
    for(j=i-1;j>=0;j++)
        printf("%c",*p+j);
    getch();
}

