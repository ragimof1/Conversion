#include <stdio.h>


void d2o(int dec) {
    int oc[100];
    int i = 0;
    while (dec != 0) {
        oc[i] = dec % 8;
        dec = dec / 8;
        i++;
    }
    printf("Equivalent octal value: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", oc[j]);
    printf("\n");
}