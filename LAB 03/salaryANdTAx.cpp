#include <stdio.h>
int main(){
	double salary, tax_rate, tax, r_salary;
	printf("Please enter your salary and then tax rate(%%): ");
	scanf("%lf%lf", &salary, &tax_rate);
	tax = tax_rate/100*salary;
	r_salary = salary - tax; //this is remaining salary
	printf("Value for your tax is %0.2lf and remaining salary is %0.2lf", tax, r_salary );
	
	return 0;
}

