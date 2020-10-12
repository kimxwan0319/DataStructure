#include <stdio.h>
#include <stdlib.h>

typedef struct Node *  NodePointer;
typedef struct Node{
    int data;
    NodePointer link;
}Node;

void insert_Head(int value);
void insert_Tail(int value);
void insert(NodePointer pre, int value);
int Delete(NodePointer tra, NodePointer del);

NodePointer tail = NULL;

int main(){
    //user's code
}

void insert_Head(int value){
    NodePointer temp = (NodePointer)malloc((sizeof(Node)));
    
    temp->data = value;
    temp->link = tail->link;
    tail->link = temp;
}

void insert_Tail(int value){
    NodePointer temp = (NodePointer)malloc((sizeof(Node)));
    
    temp->data = value;
    temp->link = tail->link;
    tail->link = temp;
    tail = temp;
}

void insert(NodePointer pre, int value){
    NodePointer temp = (NodePointer)malloc((sizeof(Node)));
    
    temp->data = value;
    temp->link = pre->link;
    pre->link = temp;
}

int Delete(NodePointer tra, NodePointer del){
    
    if(!tail) return  printf("List is Empty!\n");
    else{
        int item = del->data;
        tra->link = del->link;
        
        if(del == tail) tail = del->link;
        
        free(del);
        return item;
    }
}
