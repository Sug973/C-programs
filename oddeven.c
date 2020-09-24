#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i;
    printf("Enter array element: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d is even",a[i]);
        }
        else
        {
            printf("\n%d is odd",a[i]);
        }
    }
    getch();
}
