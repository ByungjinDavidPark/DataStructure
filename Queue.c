
//
//  David Park - Queue.c
//  ISCG6426
//
//  Created by David Park on 6/09/15.
//  Copyright (c) 2015 David Park. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct Queue
{
    int capacity; // maximum number of elements
    int size;     // size of queue
    int front;    // index of first element
    int rear;     // index of last element
    int *elements;
}Queue;

// create queue
// para - maximum number of elements the queue
Queue * createQueue(int maxElements)
{
    Queue *Q;
    Q = (Queue *)malloc(sizeof(Queue));
    Q->elements = (int *)malloc(sizeof(int)*maxElements);
    Q->size = 0;
    Q->capacity = maxElements;
    Q ->front = 0;
    Q ->rear = -1;
    return Q;
}

void Dequeue(Queue *Q)
{
    // check queue is empty
    if(Q->size==0)
    {
        printf("Queue is Empty\n");
        return;
    }
    else
    {
        Q->size--;
        Q->front++;
        if(Q->front==Q->capacity)
        {
            Q->front=0;
        }
    }
    return;
}


int front(Queue *Q)
{
    if(Q->size==0)
    {
        printf("Queue is Empty\n");
        
    }
    return Q->elements[Q->front];
}

int rear(Queue *Q)
{
    if(Q->size==0)
    {
        printf("Queue is Empty\n");
        
    }
    return Q->elements[Q->rear];
}

void Enqueue(Queue *Q,int element)
{
    // check the queue is full
    if(Q->size == Q->capacity)
    {
        printf("Queue is Full\n");
    }
    else
    {
        Q->size++;
        Q->rear = Q->rear + 1;
        if(Q->rear == Q->capacity)
        {
            Q->rear = 0;
        }
        Q->elements[Q->rear] = element;
    }
    return;
}



int main()
{
    int choice;
    int num;
    
    // create Queue
    printf("Please insert a number for queue size \n");
    scanf("%d", &choice);
    Queue *Q = createQueue(choice);
    printf("Queue is created!\n\n");
    while (1)
    {
        printf("1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Queue Front \n");
        printf("4.Queue Rear \n");
        printf("5.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter your number to be put into queue : ");
                scanf("%d", &num);
                Enqueue(Q,num);
                printf("----------------------------------------\n\n");
                break;
            case 2:
                Dequeue(Q);
                printf("----------------------------------------\n\n");
                break;
            case 3:
                printf("Front element is %d\n",front(Q));
                printf("----------------------------------------\n\n");
                break;
            case 4:
                printf("Rear element is %d\n",rear(Q));
                printf("----------------------------------------\n\n");
                break;
            
            case 5:
                exit(1);
            default:
                printf("Wrong choice \n");
        } /*End of switch*/
    } /*End of while*/
} /*End of main()*/