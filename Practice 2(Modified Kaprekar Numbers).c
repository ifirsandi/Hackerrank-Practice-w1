#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int p, q;
    scanf ("%d\n%d", &p, &q);
    for (int i=p; i<=q; i++){
        long i2 =  i*i;
        char is[8];
        sprintf (is, "%d", i2);
        int ic = strlen (is);
        int ia =0;
        int ib =0;
        for (int j=0; j<ic/2; j++){
            ia= ia*10 + (is[j]-'0');
            ib= ib*10 + (is[ic/2 + j] - '0');
        }
        if (ic%2==1){
            ib= ib*10 + (is[ic-1] - '0');
        }
        if (ia+ib == i ){
            printf ("%d ", i);
        }
    }

    return 0;
}


