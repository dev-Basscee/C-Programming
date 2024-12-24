#include <stdio.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
struct vector{
    int i;
    int j;
};

int main(){
    struct vector v = {1, 2};
    printf("The value of vector is %di + %d j", v.i, v.j);
    return 0;
}