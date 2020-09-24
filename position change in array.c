#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],position,value,n;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter position ");
    scanf("%d",&position);
     printf("enter value ");
    scanf("%d",&value);
    position--;

    for(i=n-1;i>=position;i--)
    {
        a[i+1]=a[i];
    }
    a[position]=value;
    position++;

    for(i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
}
