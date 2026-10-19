#include <stdio.h>
int main(){
	int n, price, total_price = 0, qty; char ch;
	printf("\t\t\tABC Restaurant Online Order Placement!\n");
	printf("\t\t\t\t\tWelcome!\n\n");
	printf("Please select from the folowing menu\nB= Burger\t200 PKR\nF= French Fries\t50 PKR\nP= Pizza\t500 PKR\nS= Sandwitch\t150\n");
	printf("How many types of snack you need to order: ");
	scanf("%d", &n);
	if (n<2 || n>4){
		printf("invalid"); return 0;
	}
	for (int i = 1; i <= n; i++){
		printf("Enter Choice and QTY: ");
		scanf(" %c %d", &ch, &qty);

		switch(ch){
			case 'B':
				printf("You ordered %d Burger costs %d PKR\n", qty, qty * 200); total_price += qty * 200; break;
			case 'F':
				printf("You ordered %d French Fries costs %d PKR\n", qty, qty * 50); total_price += qty * 50; break;
			case 'P':
				printf("You ordered %d Pizza costs %d PKR\n", qty, qty * 500); total_price += qty * 500; break;
			case 'S':
				printf("You ordered %d Sandwitch costs %d PKR\n", qty, qty * 150); total_price += qty * 150; break;
			default:
				printf("Invalid Choice"); return 0;
		}	
	}
	printf("Total amount for your order is: %d\nHave a nice Day!", total_price); return 0;	        
}
