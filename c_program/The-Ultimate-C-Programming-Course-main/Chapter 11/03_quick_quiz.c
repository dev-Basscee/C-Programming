#include <stdio.h>
#include <stdlib.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    printf("%d", ptr[0]);
    return 0;
}