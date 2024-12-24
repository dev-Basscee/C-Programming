#include <stdio.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main() {
    int i = 1;
    int sum = 0;
    while(i<=10){
        sum +=i;
        i++;
    }
    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}