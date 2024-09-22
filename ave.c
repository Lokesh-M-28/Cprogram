#include<stdio.h>
#include<conio.h>
void main()
{
	int i,avg,sum=0,mark[5];
	clrscr();
	for(i=1;i<=5;i++){
		printf("\nEnter the marks:");
		scanf("%d",&mark[i]);
	}
	i=1;
	while(i<=5){
		sum=sum+mark[i];
		i++;
	}
	avg=sum/5;
	printf("\nThe average of marks:%d",avg);
	getch();
}