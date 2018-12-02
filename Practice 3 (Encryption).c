#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str[81];
    scanf ("%s", &str);
    int i =  strlen(str);
    int q=2;
    if (i>64){
        q=9;
    } else if (i>49 ){
        q=8;
    } else if (i>36){
        q=7;
    } else if (i>25 ){
        q=4;
    } else if (i>16){
        q=5;
    } else if (i>9){
        q=4;
    } else if (i>4){
        q=3;
    } 
    for (int x=0; x<q; x++){
        for (int y=0; y<i; y=y+q){
            printf("%c", str[x+y]);
        }
        printf (" ");
    }
    return 0;
}

