#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
    int i,a[size],max;
    printf("Enter element");
    for(i=0;i<size;i++)
    {
        scanf("%d ",&a[i]);
    }
    max=a[0];
    for(i=0;i<size;i++)
    {
        if( max<a[i] )
        {
            max=a[i];
        }
    }
    printf("\nMax value is %d",max);
}
