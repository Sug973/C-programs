#include<stdio.h>

void main()
{

    int sum1=0,i,sum2=0,j,in_sum1=0,in_sum2=0,percent,re1,re2;
    char str1[100],str2[100];


    printf("Enter name of boy:\n");
    scanf("%s",str1);
    printf("Enter name of girl:\n");
    scanf("%s",str2);

    for(i=0;str1[i] != NULL;i++)
    {
        sum1 = sum1 + str1[i];
    }

    for(j=0;str2[j] != NULL;j++)
    {
        sum2 = sum2 + str2[j];
    }

  for(i=0;sum1 != 0;i++)
  {
      re1 = sum1 % 10;
      sum1 = sum1 / 10;
      in_sum1 = in_sum1 + re1;

  }
  for(j=0;sum2 != 0;j++)
  {
      re2 = sum2 % 10;
      sum2 = sum2 / 10;
      in_sum2 = in_sum2 + re2;

  }

    percent = (in_sum1 + in_sum2) + 40;

    printf("Love percentage = %d",percent);

}