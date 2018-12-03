#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a_c;
    scanf("%d", &a_c);
    int ar[a_c];
    for (int i=0; i<a_c; i++){
        scanf("%d", &ar[i]);
    }
    int count =0;
    int i=0;
    while (i<a_c){
        if (ar[i]==0){
            if (ar[i+2]==0){
                i=i+2;
                count++;
            } else if (ar[i+1]==0){
                i=i+1;
                count++;
            }
        }
        if (i >a_c-4){
            count++;
            break;
        }
    }
    if (a_c<4){
        count = 1;
    }
    printf("%d", count);
    return 0;
}

