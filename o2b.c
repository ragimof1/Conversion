#include <stdio.h>
#include <math.h>
#include <string.h>

void o2b(int oc) {
    char str[20];
    sprintf(str, "%d", oc);
    for(int i = 0; i <= strlen(str); i++){
        if(str[i] > '7'){
            printf("Invalid conversion please restart the app");
            return;
        }
    }
    int dec = 0, i = 0;
    long long bin = 0;
    while (oc != 0) {
        dec += (oc % 10) * pow(8, i);
        ++i;
        oc /= 10;
    }
    i = 1;

    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    printf("%lld", bin);
}


