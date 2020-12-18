#include <stdio.h>
#include <stdlib.h>

void swap(int **a, int **b){
    int *temp = &a;
    &a = &b;
    &b = temp;
}

void Quick(int arr[], int st, int en){
    int key = arr[(st+en)/2];
    int q = st, w = en;
    
    do{
        while(arr[q]<key) q++;
        while(arr[w]>key) w--;
    
       if(q<w) swap(arr+q,arr+w);
       }while (q<w);
}

int main()
{
    
}

