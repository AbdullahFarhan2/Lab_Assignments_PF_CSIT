#include <stdio.h>
int main(){
    float cost, discount, saved, amount;
    printf("Enter the cost of shopping: ");
    scanf("%f", &cost);
    if (cost >= 2000 && cost <= 4000) {
        discount = 20;
    } else if (cost >= 4001 && cost <= 6000) {
        discount = 30;
    } else if (cost > 6000) {
        discount = 50;
    } else {
        discount = 0;
    }
    saved = cost * discount / 100;
    amount = cost - saved;
    printf("Actual Amount = %.2f\n", cost);
    printf("Saved Amount = %.2f\n", saved);
    printf("Amount After Discount = %.2f\n", amount);
    return 0;
}
