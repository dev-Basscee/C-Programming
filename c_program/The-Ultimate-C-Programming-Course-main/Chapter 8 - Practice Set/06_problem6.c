#include <stdio.h>
#include <string.h>
/*
Author:   Bassey Emmanuel Emmanuel
Date: 3  2023
*/
int main(){
    char str[] = "Mera saara paisa takiye ke neeche black poly me hai";
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i] + 1;
    }

    printf("%s", str);
    
    return 0;
}