#include <stdio.h>
int main(){
    int num, sum = 0, prime = 1;
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    if (num/10000 <= 0 || num/10000 > 9){
        printf("Number is not 5 digit number");
        return 0;
    }
    int temp = num;
    for (int i = 1; i <= 5; i++){
        sum += temp%10;
        temp /= 10;
    }

    if (sum%2 == 0){
        printf("Sum of digit is Even Number\n");
        for(int i = 2; i < num; i++){
            if (num % i == 0){
                prime = 0;
                break;
            }
        }
        switch(prime){
            case 1: printf("Number is prime\n"); break;
            case 0: printf("number is not prime\n"); break;
        }
    } else {
        printf("Sum of digit is Odd Number\n");
        if (num%100000/10000 == num%10 && num%10000/1000 == num%100/10){
            printf("Number is Palindrome\n");
        } else {
            printf("number is not Palindrome\n");
        }
    } 
    return 0;
}
