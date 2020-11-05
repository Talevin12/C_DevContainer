#include "x.h"
#include <stdio.h>
#include <stdlib.h>

void doSomething() 
{
    printf("Hello world %d \n\n", 5);
}

void bhaaaa() 
{   
    int *number = malloc(sizeof(int));;
    *number = 5891;

    printf("%d in memory holds %d \n\n", number, *number);

    free(number);
}