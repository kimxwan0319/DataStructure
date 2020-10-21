#include <stdio.h>
#include <stdlib.h>

typedef struct Node *  NodePointer;
typedef struct Node{
    int data;
    NodePointer link;
}Node;

NodePointer top = NULL;

void push(int value);
int pop(void);
int isEmpty(void);

int main(){
    //user's code
}

void push(int value){
    NodePointer temp = (NodePointer)malloc((sizeof(Node)));
    
    temp->data = value;
    temp->link = top;
    top = temp;
}

int pop(){
    NodePointer deletePtr;
    int deleteData;
    
    if(isEmpty()) return printf("stack is empty");
    else{
        deletePtr = top;
        deleteData = deletePtr->data;
        top = top->link;
        free(deletePtr);
        return deleteData;
    }
}

int isEmpty(){
    if(!top) return 1;
    else return 0;
}
