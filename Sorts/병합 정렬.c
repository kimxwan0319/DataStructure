#include <stdio.h>
#include <stdlib.h>

int size;
int *sorted;
int count=0;

void merge(int a[],int m, int middle, int n)             //병합 정렬 함수
{
    int i, j, k, t;
    i=m;
    j=middle+1;
    k=m;

    while(i<=middle && j<=n){
        if(a[i]<=a[j]){
            sorted[k]=a[i];
            i++;
            count++;
        }
        else{
            sorted[k]=a[j];
            j++;
            count++;
        }
        k++;
   
    }
    if(i>middle){
        for(t=j;t<=n;t++,k++)
            sorted[k]=a[t];
    }
    else{
        for(t=i;t<=middle; t++,k++)
            sorted[k]=a[t];
    }
    for(t=m;t<=n;t++)
        a[t]=sorted[t];
        
}

void mergeSort(int a[], int m, int n)                    //분할 하는 함수
{
    int middle;
    if(m<n){
        middle=(m+n)/2;
        mergeSort(a, m, middle);
        mergeSort(a,middle+1,n);
        merge(a,m, middle, n);
    }
}

int main()
{
    int t;
    scanf("%d",&size);
    int *list = (int*)malloc(sizeof(int)*size);
    for(t=0; t<size; t++)
        scanf("%d",&list[t]);
    sorted = (int*)malloc(sizeof(int)*size);
    mergeSort(list,0,size-1);
    for(t=0;t<size;t++)
        printf("%d  ", list[t]);
    free(list);
}

