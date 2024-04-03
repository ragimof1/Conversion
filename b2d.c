#include <stdio.h>
#include <stdlib.h>

void b2d(int b){
    char bin[100];
    sprintf(bin, "%d", b);
    printf("Decimal equivalent: %ld\n", strtol(bin, NULL, 2));
}