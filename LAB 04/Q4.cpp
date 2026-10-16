// This could be done more simply using % 7 to check divisibility,
// but the question requires us to follow the given method.
#include <stdio.h>
int main(){
    int num, lastDigit, rest;
    printf("Enter a number: ");
    scanf("%d", &num);
	repeat:	
    if (num == 7 || num == -7 || num == 0) {
        printf("The number is divisible by 7.");
    } else if (num < 7 && num > -7) {
        printf("The number is not divisible by 7.");
    } else {
        lastDigit = num % 10;
        rest = num / 10;
        num = rest - (2 * lastDigit);
		goto repeat;    	
	} return 0;
}
