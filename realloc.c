#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i,sum=0;
    ptr=(int *)malloc(5*sizeof(int));
    printf("\n Enter 5 elemants");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr);
        sum+= *ptr;
        ptr++;
    }
    printf("\n Addition of 5 values = %d",sum);

    printf("\n Modify size to store 10 values..");
    realloc(ptr,10*sizeof(int));

    for(i=5;i<10;i++)
    {
        scanf("%d",ptr);
        sum+= *ptr;
        ptr++;
    }
    printf("\n Addition of 10 values = %d",sum);
    return 0;
}
