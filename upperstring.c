#include<stdio.h>
#include<conio.h>

void main()
{
char ch[20];
int i=0;
gets(ch);
while(ch[i]!=NULL)
{
	if(ch[i]>='a' && ch[i]<='z')
	{
		ch[i]=ch[i]-32;
	}
	
	i++;
}
printf("%s",ch);



getch();
}