#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
    int p,ans;
    printf("Enter Number:");
    scanf("%d",&p);
    ans=fact(p);
    printf("\nfactorail of %d is %d",p,ans);
    getch();
}

int fact(int n)
{
    if(n==1)
        return 1;

    else
        return n*fact(n-1);
}


