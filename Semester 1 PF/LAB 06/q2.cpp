#include <stdio.h>
int main(){
    int first = 0, second = 1, current, sum = 0;
    printf("Fibonacci series:\n%d\t%d\t", first, second);
    current = first + second;

    while(current <= 1000){
        printf("%d\t", current);

        if (current % 3 == 0 || current % 5 == 0 || current % 7 == 0){
            sum += current;
        }

        first = second;
        second = current;
        current = first + second;
    }
    printf("\n\nSum of those divisible by 3, 5, or 7 is: %d", sum);

    return 0;
}
