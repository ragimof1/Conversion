#include <stdio.h>
#include <stdlib.h>

void b2o(int b){
    char bin[100], octal[100];
    sprintf(bin, "%d", b);
    long decimal = strtol(bin, NULL, 2);
    sprintf(octal, "%lo", decimal);
    printf("Octal equivalent: %s\n", octal);
}