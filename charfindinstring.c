#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10],c;
    int i,f;
    gets(a);
    scanf("%c",&c);
    for(i=0;i<10;i++)
    {
        if(a[i]==c)
        {
            f=1;
            printf("char is found");
            break;
        }
        else
        {
           f=0;
        }
    }
    if(f==0)
        printf("not found");
    getch();

}
