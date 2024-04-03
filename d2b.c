#include <stdio.h>


void d2b(int dec){
    int binary[32];
    int i = 0;
    if (dec == 0) {
        printf("Binary equivalent is: 0\n");
        return;
    }
    while (dec > 0) {
        binary[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    printf("Binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}