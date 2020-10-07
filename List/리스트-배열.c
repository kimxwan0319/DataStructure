#include <stdio.h>

void insert(int* ptr ,int index ,int value);
int Delete(int *ptr, int index);
int search(int *ptr, int value);

int main(){
    int stack[10] = {0,};
    //user's code
}

void insert(int* ptr ,int index ,int value){
    for (int i = 8; i>=index; i--) ptr[i+1] = ptr[i];
    ptr[index] = value;
}


int Delete(int *ptr, int index){
    int item = ptr[index];
    for (int i = index; i<9; i++) ptr[i] = ptr[i+1];
    ptr[9] = 0;
    return item;
}


int search(int *ptr, int value){
    for(int i = 0; i<10; i++){
        if(ptr[i] == value) return i;
    }
    return printf("이 배열에 %d 값이 없습니다.",value);
}
