#include <stdio.h>
#include <stdlib.h>
 

 
void insert(int, int []);
void delete(int, int []);
void display(int, int []);
int rear = - 1;
int front = - 1;
void main()
{
    int choice, MAX;
    printf("Enter the size of the queue: ");
    scanf("%d", &MAX);
    int queue_array[MAX];
    while(1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert(MAX, queue_array);
            break;
            case 2:
            delete(MAX, queue_array);
            break;
            case 3:
            display(MAX, queue_array);
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
 
void insert(int MAX, int queue_array[])
{
    int add_item;
    if (rear == MAX - 1){
        printf("Queue Overflow \n");
        exit(0);
    }
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
void delete(int MAX, int queue_array[])
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
 
void display(int MAX, int queue_array[])
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} 
