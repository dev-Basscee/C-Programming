#include <stdio.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
typedef struct c{
    int real;
    int imaginary;
} Complex;

int main(){
    Complex c = {1, 2};
    printf("The value of Complex number is %d + %di ", c.real, c.imaginary);
    return 0;
}