#include <stdio.h>
#include <stdlib.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main(){
    int n = 5;
    int* ptr; 
    ptr = (int*) malloc(n * sizeof(int)); 
    ptr[0] = 3;  
    printf("%d", ptr[0]);

    ptr = (int*) realloc(ptr, 10 * sizeof(int)); 
    printf("%d", ptr[0]);
    return 0;
}