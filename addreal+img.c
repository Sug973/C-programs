#include<stdio.h>
#include<conio.h>

struct comp
{
    int real;
    int imag;
}a,b,c;

void add(struct comp x,struct comp y,struct comp z)
{
    z.real=x.real+y.real;
    z.imag=x.imag+y.imag;
    printf("\nAddition of it is %d + %di ",z.real,z.imag);
}

void main()
{
    printf("enter real part=");
    scanf("%d",&a.real);
     printf("enter imaginary part=");
    scanf("%d",&a.imag);

    printf("enter real part=");
    scanf("%d",&b.real);
     printf("enter imaginary part=");
    scanf("%d",&b.imag);

    add(a,b,c);
    getch();
}



