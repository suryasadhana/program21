#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,c;
a=0;
b=1;
c=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d",c);
a=b;
b=c;
c=a+b;
}
getch();
}
