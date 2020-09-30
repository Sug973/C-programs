#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    printf("Enter %d array element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
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
