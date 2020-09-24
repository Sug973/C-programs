#include<stdio.h>
int *max(int *x,int *y)
{
    if(*x > *y)
        return x;

    else
        return y;
}
void main()
{
    int a=10,b=20,*m;
    m=max(&a,&b);
    printf("Max is %d",*m);
}
