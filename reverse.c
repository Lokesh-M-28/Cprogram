#include<stdio.h>
int main(){
    int num,rem,reverse=0,num1;
    printf("Enter the number: ");
    scanf("%d",&num);
    num1=num;
    for(num1=num;num1>0;num1/=10){
        rem=num1%10;
        reverse=(reverse*10)+rem;
    }
    printf("The Reverse of the given number is: %d",reverse);
    
    return 0;
    
}