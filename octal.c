#include<stdio.h>
int main(){
    int num,sum=0,rem,i=1;
    printf("Give a decimal number: ");
    scanf("%d",&num);
    while(num!=0){
        rem=num%8;
        num=num/8;
        sum=sum+rem*i;
        i=10*i;
    }
     printf("The Octal value is: %d",sum);
return 0;
}