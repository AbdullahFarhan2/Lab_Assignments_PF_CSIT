#include <stdio.h>
#include <string.h>
int main(){
    char reg_user[10], reg_pass[10], log_user[10], log_pass[10];
    int valid = 1;
    printf("REGISTRATION\n");
    do {
        valid = 1;
        printf("Enter user name exactly 5 letters and only alphabet: ");
        scanf("%s", reg_user);
        if (strlen(reg_user) != 5){
            printf("must be exact 5 characters\n");
            valid = 0;
            continue;
        }
        for (int i = 0; i < 5; i++){
            if (!((reg_user[i] >= 'a' && reg_user[i]<= 'z') || (reg_user[i] >= 'A' && reg_user[i] <= 'Z'))){
                printf("user can only contain alphabet\n");
                valid = 0;
                break;
            }
        }
    } while (valid == 0);
    printf("\n");
    do {
        valid = 1;
        printf("Enter password 6 char long and must have 1 capital, 1 small letter, 1 numeric: ");
        scanf("%s", reg_pass);
        if (strlen(reg_pass) != 6){
            printf("must be exact 6 characters\n");
            valid = 0;
            continue;
        }
        int numc = 0, uc = 0, lc = 0;
        for (int i = 0; i < 6; i++){
            if (reg_pass[i] >= '0' && reg_pass[i] <= '9'){
                numc++;
            } else if(reg_pass[i] >= 'a' && reg_pass[i] <= 'z'){
                lc++;
            } else if(reg_pass[i] >= 'A' && reg_pass[i] <= 'Z'){
                uc++;
            }
        }
        if (numc < 1 || lc < 1 || uc < 1){
            printf("must contain 1 numeric 1 uppler and lower letter\n");
            valid = 0;
            continue;
        }
    } while (valid == 0);
    printf("User has been registered\n");
    printf("LOGIN\n");
    do {
        valid = 1;
        printf("Enter user name to login: ");
        scanf("%s", log_user);
        printf("Enter password: ");
        scanf("%s", log_pass);
        if (strlen(log_user) != 5 || strlen(log_pass) != 6){
            valid = 0;
            printf("Invalid creedentials\n");
            continue;
        }
        for (int i = 0; i < 5; i++){
            if (log_user[i] != reg_user[i]){
                printf("Invalid user name\n");
                valid = 0;
                break;
            }
        }
        for (int i = 0; i < 6; i++){
            if (log_pass[i] != reg_pass[i]){
                printf("Invalid passwprd\n");
                valid = 0;
                break;
            }
        }
    } while (valid == 0);
    printf("welcome %s, you are logged in", log_user);
    return 0;
}
