#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,a,i,max;
	clrscr();
	printf("\nEnter 1st number:");
	scanf("%d",&num1);
	printf("\nEnter 2nd number:");
	scanf("%d",&num2);
	if(num1<num2){
		a=num1;
	}else{
		a=num2;
	}
	for(i=1;i<=a;i++){
		if(num1%i==0){
			if(num2%i==0){
				max=i;
			}
		}
	}
	printf("%d",max);
	getch();
}