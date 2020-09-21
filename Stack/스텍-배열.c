#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push(int* arr ,int value);
void pop(int *arr);
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

void pop(int *arr){
    if(isEmpty()) printf("the stack is Enpty\n");
    else arr[top--] = 0;
}

int isFull(){
    if(top>=9) return 1;
    else return 0;
}

int isEmpty(void){
    if(top<0) return 1;
    else return 0;
}

