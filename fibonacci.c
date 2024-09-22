#include <stdio.h>

void main() 
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of terms must be a positive integer.\n");
    }else{
        printf("\nYour Number is Positive");
    }

    int first = 0, second = 1, res;

    printf("Fibonacci Sequence:\n");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        res= first + second; 
        first = second;      
        second = res;        
        printf("%d ", res);   
    }
    
    printf("\n"); 

}