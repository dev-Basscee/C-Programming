#include <stdio.h>
#include <string.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main(){
    char str[] = "Nfsb!tbbsb!qbjtb!ubljzf!lf!offdif!cmbdl!qpmz!nf!ibj";
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i] - 1;
    }

    printf("%s", str);
    
    return 0;
}