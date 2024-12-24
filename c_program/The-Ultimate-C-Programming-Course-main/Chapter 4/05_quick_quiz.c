#include <stdio.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main(){
    /*
  Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
 counter is initialized to 0.
   */

    int i = 0;
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d\n", i);
        }
        i++;
    }

    return 0;
}