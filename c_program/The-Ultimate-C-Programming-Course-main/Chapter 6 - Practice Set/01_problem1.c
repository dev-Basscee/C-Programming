#include <stdio.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *ptr);
    return 0;
}