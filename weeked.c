#include<stdio.h>
#include<conio.h>
int main()
{
 int no;
 printf("\n Enter Day no between 1-7:-");
 scanf("%d",&no);
 switch(no)
 {
 case 1:
    printf("\n Sunday");
    break;
 case 2:
    printf("\n Monday");
    break;
 case 3:
    printf("\n Tuesday ");
    break;
 case 4:
    printf("\n Wednesday");
    break;
 case 5:
    printf("\n Thursday");
    break;
 case 6:
    printf("\n Friday");
    break;
 case 7:
    printf("\n Saturday");
    break;
    dafault:
        printf("\n please enter proper input");
        break;
 }

}
