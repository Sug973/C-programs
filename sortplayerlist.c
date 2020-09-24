#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    char n[50];
    char tm[50];
    float r;
}p[10],temp;

void byname()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        if((strcmp(p[i].n,p[j].n))<0)
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
        }
    }
    printf("Details in Sorted order:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n%s\n %s\n %f\n\n ",p[i].n,p[i].tm,p[i].r);
    }
}

void byteam()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        if((strcmp(p[i].tm,p[j].tm))<0)
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
        }
    }
    printf("Details in Sorted order:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n%s\n %s\n %f\n\n ",p[i].n,p[i].tm,p[i].r);
    }
}

void byrun()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        if(p[i].r > p[j].r)
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
        }
    }
    printf("Details in Sorted order:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n%s\n %s\n %f\n\n ",p[i].n,p[i].tm,p[i].r);
    }
}

void main()
{

    int i,ch=0,n;
    //printf("\nEnter no of player: ");
    //scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        printf("\nEnter details of player %d ",i);
        printf("\nEnter player name:");
        scanf("%s",&p[i].n);

        printf("\nEnter team name:");
        scanf("%s",&p[i].tm);

        printf("\nEnter highrun:");
        scanf("%f",&p[i].r);
    }
    while(1)
    {

    printf("\nEnter chioce: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        {
            byname();
            break;
        }
    case 2:
        {
            byteam();
            break;
        }
    case 3:
        {
            byrun();
            break;
        }
    case 4:
        {
            exit(1);
        }

    }
    }
}
