//
//  David Park - List.c
//  ISCG6426
//
//  Created by David Park on 7/09/15.
//  Copyright (c) 2015 David Park. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* next; // pointer to node hat wil store the address of the next node
};

// head note  - that will be pointer to Node and that will store address of first node
struct node* head;

void create(struct node **,int);
void search(struct node*,int,int);
void destory(struct node**);
void delete(struct node**);
void count(struct node*);

int main()
{
    int key, num, choice;
    
    while(1)
    {
        printf("\n------------------------------");
        printf("\n1.Create and Insert Number\n");
        printf("2.Search \n");
        printf("3.Count \n");
        printf("4.Delete first element \n");
        printf("5.Destory \n");
        printf("6.EXIT  \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter the number of nodes for list:  ");
                scanf("%d",&num);
                create(&head,num);
                break;
            case 2:
                printf("\nEnter int that you want to search: ");
                scanf("%d", &key);
                search(head, key, num);
                break;
            case 3:
                count(head);
                break;
            case 5:
                destory(&head);
                printf("\nList has been destroyed \n");
                break;
            case 4:
                delete(&head);
                printf("\nFirst element has been deleted \n");
                break;
            case 6:
                exit(1);
            default:
                printf("Wrong choice \n");
        }
    }
    
}

void create(struct node **head, int num)
{
    int i;
    struct node *temp;
    
    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("\nPlease input a number :  ");
        scanf("%d",&temp ->data);
        
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
        printf("The number has been inserted into first element of list");
    }
}

void destory(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void delete(struct node **head)
{
    struct node *temp;
    temp = *head;
    *head = (*head)->next;
}

void search(struct node *head, int key, int index)
{
    if (head->data == key)
    {
        printf("Key found at Position: %d\n", index);
    }
    if (head->next == NULL)
    {
        return;
    }
    search(head->next, key, index - 1);
}

void count(struct node *head)
{
    printf("\nStatus of the linked list is\n");
    int count = 0;
    while (head != 0)
    {
        printf("%d=>", head->data);
        count++;
        head = head -> next;
    }
    printf("NULL\n");
    printf("Number of nodes in the list = %d\n", count);
}


