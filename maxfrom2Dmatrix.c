#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],max,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    printf("%d",max);
    getch();
}
