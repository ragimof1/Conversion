#include <stdio.h>
#include <math.h>
#include <string.h>

void o2d(int oc) {
    char str[20];
    sprintf(str, "%d", oc);
    for(int i = 0; i <= strlen(str); i++){
        if(str[i] > '7'){
            printf("Invalid conversion...");
            return;
        }
    }
    int dec = 0, i = 0;
    while (oc != 0) {
        dec += (oc % 10) * pow(8, i);
        ++i;
        oc /= 10;
    }
    printf("%d", dec);
}