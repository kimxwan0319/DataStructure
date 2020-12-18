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
    
    for(q=0; q<n-1; q++){
        for(w=q+1; w<n; w++){
            if(arr[q]> arr[w]){
                swap = arr[q];
                arr[q] = arr[w];
                arr[w] = swap;
            }
        }
    }
    
    for(q=0; q<n; q++)
        printf("%d ",arr[q]);
    
    free(arr);
}
