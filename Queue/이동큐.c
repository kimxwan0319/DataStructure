#include <stdio.h>

int rear = -1;
int front = -1;

int addQ(int* queue ,int value);
int delete(int *arr);

void print(int* arr){
    for (int i = 0; i<10; i++) printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int queue[10] = {0,};
    //user's code
}


int addQ(int* arr ,int value){
    if(rear>=9){
        if(front == -1) return printf("the queue is Full\n");
        else{
            for(int i = front+1; i<=rear; i++){
                arr[i-front-1] = arr[i];
                arr[i] = 0;
            }
            rear = rear - front -1;
            front = -1;
        
            arr[++rear] = value;
        }
    }
    else arr[++rear] = value;
    
    return 0;
}

int delete(int *arr){
    if(front == rear) return printf("the queue is Empty\n");
    else {
        return arr[++front];
    }
}


