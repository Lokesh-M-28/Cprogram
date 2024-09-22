#include<stdio.h>
#include<conio.h>

void main()
{
int number,n,max=0,min=9,range;
clrscr();
printf("Enter how many  numbers you want  : ");
scanf("%d",&number);
while(number!=0)
{
printf("\nEnter  a number : ");
scanf("%d",&n);
if(n>max)
{
max= n;
}
if(n<min)
{
min=n;
}
number-=1;
}
printf("\nMaximum Number : %d",max);
printf("\nMinimum Number : %d",min);
range=max-min;
printf("\nRange : %d ",range);
getch();
}