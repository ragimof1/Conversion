#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void menu(bool *boolean);
int getInput(char format[]), qq();
extern void b2d(int b), b2o(int b), d2b(int dec), d2o(int dec), o2b(int oc), o2d(int oc);

bool boolean = true;
int main() {


    printf("************************************************\n");
    printf("*                                              *\n");
    printf("*                  Conversion                  *\n");
    printf("*                                              *\n");
    printf("************************************************\n");
    while (boolean){
        menu(&boolean);
    }
    return 0;
}
void menu(bool *boolean){
    bool a = true;
    while (a) {
        printf("***************   -Main Menu-    ***************\n");
        printf("*************** Select an option ***************\n");
        printf("*        1- Binary to Decimal                  *\n");
        printf("*        2- Binary to Octal                    *\n");
        printf("*        3- Decimal to Binary                  *\n");
        printf("*        4- Decimal to Octal                   *\n");
        printf("*        5- Octal to Binary                    *\n");
        printf("*        6- Octal to Decimal                   *\n");

        int choice;
        printf("---->Please Choose: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                b2d(getInput("Binary"));
                a = false;
                qq();
                break;
            case 2:
                b2o(getInput("Binary"));
                a = false;
                qq();
                break;
            case 3:
                d2b(getInput("Decimal"));
                a = false;
                qq();
                break;
            case 4:
                d2o(getInput("Decimal"));
                a = false;
                qq();
                break;
            case 5:
                o2b(getInput("Octal"));
                a = false;
                qq();
                break;
            case 6:
                o2d(getInput("Octal"));
                a = false;
                qq();
                break;
            default:
                printf("Please choose a valid option\n");
                continue;
        }
    }
    *boolean = false;
}
int getInput(char format[]){
    int num;
    printf("---->Please Write Your %s Number: ", format);
    scanf("%d", &num);
    return num;
}
int qq() {
    bool c = true;
    while (c) {
        printf("\nDo you want to continue?\n");
        printf("1- Yes      2- No\n");
        int choice;
        printf("Choose: ");
        scanf("%d", &choice);
        if (choice == 1) {
            c = false;
            menu(&boolean);
        } else if (choice == 2) {
            c = false;
            printf("Thank you for using our application\n");
            return 0;
        } else {
            printf("Please choose a valid option\n");
        }
    }
}