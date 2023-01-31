#include <stdio.h>
#include <stdlib.h>
int front = -1, rear = -1;

void insert(int item, int size, int a[]){
    if(front == (rear+1)%size){
        printf("Overflow! \n");
        exit(0);
    }
    else{
        rear = (rear+1) % size;
        a[rear] = item;
        if(front == -1){
            front = 0;
        }
    }
}

int del(int a[], int size){
    int item;
    if(front == rear && rear == -1){
        printf("Underflow \n");
        return 0;
    }
    else{
        item = a[front];
        if(front == rear){
            front = -1, rear = -1;
        }
        else
            front = (front+1)%size;
        return item;
    }
}

void display(int a[], int size){
    int i;
    if(front == -1)
        printf("\n Circular Queue is Empty \n");
    else{
        i = front;
        printf("\n Circular Queue: \n");
        if(front <= rear){
            while(i <= rear){
                printf("%d \t", a[i++]);
            }
        }
        else{
            while(i <= size-1)
                printf("%d \t", a[i++]);
            i = 0;
            while(i <= rear)
                printf("%d \t", a[i++]);
        }
    }
}

int main(){
    int item, choice, size;
    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    int a[size];
    printf("1. Enqueue \n 2. Dequeue \n 3. Display \n 4. Exit \n");
    while(1){
        printf("\n Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("\n Enter item: ");
                    scanf("%d", &item);
                    insert(item, size, a);
                    break;
            case 2: printf("\n Deleted element: %d", del(a, size));
                    break;
            case 3: display(a, size);
                    break;
            case 4: exit(0);
        }
    }
}
