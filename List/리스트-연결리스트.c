#include <stdio.h>
#include <stdlib.h>

typedef struct Node *  NodePointer;
typedef struct Node{
    int data;
    NodePointer link;
}Node;

void insert(NodePointer pre, int value);
int delete(NodePointer tra, NodePointer del);
int search(int key);

NodePointer head = NULL;

int main(){
    //user's code
}

void insert(NodePointer pre, int value){
    NodePointer temp = (NodePointer)malloc((sizeof(Node)));
    
    temp->data = value;
    temp->link = pre->link;
    pre->link = temp;
}


int delete(NodePointer tra, NodePointer del){
    
    if(!head) return  printf("List is Empty!\n");
    else{
        int item = del->data;
        
        if(tra) tra-> link = del->link;
        else head = del->link;
        free(del);
    
        return item;
    }
}


int search(int key){
    int count = 1;
    for(NodePointer ptr = head; ptr->data!=key; ptr = ptr->link){
        
        if(ptr->link==NULL) return -1;
        
        count++;
    }
    
    
    return count;
}
