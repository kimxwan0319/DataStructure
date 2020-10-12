#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push(int* arr ,int value);
int pop(int *arr);
int isFull(void);
int isEmpty(void);

int main(){
    int stack[10] = {0,};
    //user's code
}


void push(int* arr ,int value){
    if(isFull()) printf("the stack is full!\n");
    else arr[++top] = value;
}

int pop(int *arr){
    if(isEmpty()) return printf("the stack is Enpty\n");
    else {
        int item = arr[top];
        arr[top--] = 0;
        return item
    }
}

int isFull(){
    if(top>=9) return 1;
    else return 0;
}

int isEmpty(void){
    if(top<0) return 1;
    else return 0;
}

