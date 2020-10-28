#include <stdio.h>

int rear = 0;
int front = 0;

void addQ(int* queue ,int value);
int delete(int *arr);

void print(int* arr){
    for (int i = front+1; i<5; i++) printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int queue[5] = {0,};
    //user's code
}


void addQ(int* arr ,int value){
    if(front==(rear+1)%10) printf("the queue is full!\n");
    else arr[(++rear)%5] = value;
}

int delete(int *arr){
    if(front == rear) return printf("the queue is Empty\n");
    else return arr[(++front)%5];
}
