#include <stdio.h>
#include <stdlib.h>

typedef struct Node *  NodePointer;
typedef struct Node{
    int data;
    NodePointer Llink;
    NodePointer Rlink;
}Node;

void insert(NodePointer pre, int value);
int Delete(NodePointer del);
NodePointer head = NULL;

int main(){
    //user's code
}

void insert(NodePointer pre, int value){
    NodePointer temp = (NodePointer)malloc((sizeof(Node)));
    
    temp->data = value;
    
    temp->Llink = pre;
    temp->Rlink = pre->Rlink;
    pre->Rlink->Llink = temp;
    pre->Rlink = temp;
}

int Delete(NodePointer del){
    
    if(!head) return  printf("List is Empty!\n");
    else{
        int item = del->data;
        del->Llink->Rlink = del->Rlink;
        del->Rlink->Llink = del->Llink;
        
        free(del);
        return item;
    }
}
