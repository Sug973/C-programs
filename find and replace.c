#include<stdio.h>
#include<string.h>
void main()

{
    int i=0;
    char str[20];
    char copystr[20];
    printf("Enter text:");
    scanf("%s",&str);
    //gets(str);

    while(str[i]!=NULL)
    {
        if(str[i] == ';')
        {
            copystr[i] = ',';
        }
        else
        {
            copystr[i] = str[i];
        }
    i++;
    }
        for(i=0;i!=NULL;i++)
        {
            printf("%c",copystr[i]);

        }
}