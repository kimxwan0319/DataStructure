#include <stdio.h>

int rear = -1;
int front = -1;

void addQ(int* queue ,int value);
int delete(int *arr);

void print(int* arr){
    for (int i = front+1; i<10; i++) printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int queue[10] = {0,};
    //user's code
}


void addQ(int* arr ,int value){
    if(rear>=9) printf("the queue is full!\n");
    else arr[++rear] = value;
}

int delete(int *arr){
    if(front == rear) return printf("the queue is Empty\n");
    else {
        return arr[++front];
    }
}


