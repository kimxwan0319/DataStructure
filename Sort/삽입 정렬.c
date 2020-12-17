#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    int q,w;
    int temp;
    
    for(q=0; q<n; q++)
        scanf("%d",&arr[q]);
    
    for(q=1; q<n; q++){
        temp = arr[q];
        
        for(w=q; w>0 && arr[w-1]>temp; w--){
            arr[w] = arr[w-1];
        }
            
        arr[w] = temp;
    }
    
    for(q=0; q<n; q++)
        printf("%d ",arr[q]);
    
    free(arr);
}
