#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int bin2dec(int n)
{
    int d=0;
    int i=1;
    int t=n;
    int ld=0;

    while(t)
    {
        ld=t%10;
        t=t/10;

        d = d + (ld*i);
        i=i*2;
    }
    return d;
}

void main()
{
    int n;
    printf("Enter Binary no.: ");
    scanf("%d",&n);
    printf("\n%d ",bin2dec(n));
}
