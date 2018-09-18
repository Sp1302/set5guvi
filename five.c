#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((a>b)&&(a>c))
printf("a");
else if(b>c)
printf("b");
else
printf("c");
getch();
}
