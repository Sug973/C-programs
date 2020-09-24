#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    return(*(int*)a < *(int*)b);
}

int main()
{
    int a[]={32,71,12,45,26};
    qsort(a,5,sizeof(int),compare);
    for(int i=0;i<5;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}
