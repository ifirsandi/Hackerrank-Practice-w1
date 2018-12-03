#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int t=0; t<test; t++){
        int n,c, m,w,s, total;
        scanf("%d %d %d", &n, &c, &m);
        w = n/c;
        s = w%m;
        total = n/c;
        //printf ("%d %d %d %d %d", n, c, m, w, s);
        while (w>=m){
            int c1 = w/m;
            total = total+c1;
            w=c1+s;
            s = w%m;

        }
        printf ("%d", total);
        printf ("\n");
    }

    return 0;
}


