#include<stdio.h>
int main(){
    int n,factorial=1,i,j;
    float sum,sum1;
    printf("1/1!+2/2!...n/n!\n");
    printf("Enter the no of number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      factorial=factorial*i;
      sum1=i/(float)factorial;
      sum=sum+sum1;
    }
    printf("The factorial sum is: %f",sum);
 return 0;
 }