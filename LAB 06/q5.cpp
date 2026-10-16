#include <stdio.h>
int main(){
    double pi = 0;
    int i, a = 0, b = 0, c = 0, d = 0;

    printf("Terms\tPI\n"); // formula = 4 (1-1/3+1/5-1/7+1/9-...)
    for(i = 1; i <= 10000000; i++){
        if(i % 2 == 1)
            pi += 4.0 / (2 * i - 1); // + comes with 1 5 9 ...
        else
            pi -= 4.0 / (2 * i - 1); // - comes with 3 7 11 ...

        if(i <= 20)
            printf("%d\t%.6f\n", i, pi);

        if(a == 0 && (int)(pi * 100 + 0.5) == 314){
            a = i;
            printf("3.14 first reached at %d terms\n", a);
        }
        if(b == 0 && (int)(pi * 1000 + 0.5) == 3141){
            b = i;
            printf("3.141 first reached at %d terms\n", b);
        }
        if(c == 0 && (int)(pi * 10000 + 0.5) == 31415){
            c = i;
            printf("3.1415 first reached at %d terms\n", c);
        }
        if(d == 0 && (int)(pi * 100000 + 0.5) == 314159){
            d = i;
            printf("3.14159 first reached at %d terms\n", d);
        }
        if(a && b && c && d)
            break;
    }
    return 0;
}
