#include<stdio.h>
#include<string.h>
 struct node
 {
     char data[100];
     int top;
 };

 int empty(struct node *p)
 {
     return (p->top == -1);
 }

 int top(struct node *p)
 {
     return p->data[p->top];
 }

 void push(struct node *p,char x)
 {
     p->data[++(p->top)]=x;
 }

 void pop(struct node *p)
 {
     if(!empty(p))
     {
         (p->top)= (p->top)-1;
     }
 }

 void main()
 {
     struct node s;
     s.top=-1;
     char ch,str[100];
     printf("Enter string:-> ");
     gets(str);
     int i,len=strlen(str);
     for(i=0;i<len;i++)
     {
         push(&s,str[i]);
     }
     while(!empty(&s))
     {
         printf("%c ",top(&s));
         pop(&s);
     }
 }
