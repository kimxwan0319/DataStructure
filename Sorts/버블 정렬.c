#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    int q,w;
    int swap;
    
    for(q=0; q<n; q++)
        scanf("%d",&arr[q]);
    
    for(q=n-1; q>0; q--){
        for(w=0; w<q; w++){
            if(arr[w]>arr[w+1]){
                swap = arr[w];
                arr[w] = arr[w+1];
                arr[w+1] = swap;
            }
        }
    }
    
    for(q=0; q<n; q++)
        printf("%d ",arr[q]);
    
    free(arr);
}
