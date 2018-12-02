#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int ar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int count=0;
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (ar[j]-ar[i] == d){
                for (int k=j+1;k<n; k++){
                    if (ar[k]-ar[j]== d){
                        count++;
                        break;
                    }
                }
                break;
            }
        }
    }

    printf("%d", count);
    return 0;
}
