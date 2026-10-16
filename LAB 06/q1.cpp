#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Negative number not allowed.");
        return 0;
    }

    for(int i=n;i>=1;i--)
        fact*=i;

    printf("Factorial = %d",fact);
    return 0;
}
