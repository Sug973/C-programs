#include<stdio.h>
#include<conio.h>

#define max 10


void mergesort(int [],int ,int ,int );
void divider(int [],int ,int);

int main()
{
    int a[max],j,i,n;
    printf("enter array element");
    for(i=0;i<max;i++)
        scanf("%d",&a[i]);

    divider(a,0,max-1);

     printf("Sorted Array");
     for(j=0;j<max;j++)
     {
        scanf("%d",a[j]);
     }

        return 0;
}

void mergesort(int a[],int low,int mid,int high)
{
    int i,m,k,j,temp[max];
    j=low;
    i=low;
    m=mid+1;

    while(j<=mid && m<=high)
    {
        if(a[j]<=a[m])
        {
            temp[i]=a[j];
            j++;
        }
        else
        {
            temp[i]=a[m];
            m++;
        }
        i++;
    }

        if(j>mid)
        {
            for(k=m;k<=high;k++)
            {
                temp[i]=a[k];
                i++;
            }
        }
        else
        {
            for(k=j;k<=mid;k++)
            {
                temp[i]=a[k];
                i++;
            }
        }

        for(k=low;k<=high;k++)
        {
            a[k]=temp[k];
        }

}

void divider(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        divider(a,low,mid);
        divider(a,mid+2,high);
        mergesort(a,low,mid,high);
    }
}


