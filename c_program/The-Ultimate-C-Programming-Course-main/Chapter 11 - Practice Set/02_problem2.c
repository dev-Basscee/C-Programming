#include <stdio.h>
#include <stdlib.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}