#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],max,min,x,y,temp=0;
    printf("Enter element:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            x=i;
        }
    }
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            y=i;
        }
    }

    temp=a[x];
    a[x]=a[y];
    a[y]=temp;

    printf("New array:\n");
    for(i=0;i<10;i++)
    {
        printf("%2d",a[i]);
    }
}
