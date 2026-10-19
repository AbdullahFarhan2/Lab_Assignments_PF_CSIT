#include <stdio.h>
int main(){
    char ch;
    printf("Are you sure to delete [Y/y] / [N/n] \?");
    scanf("%c", &ch);

    switch(ch){
        case 'Y':
        case 'y':
            printf("Deleted successfully");
            break;
        case 'N':
        case 'n':
            printf("Delete cancelled");
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}
