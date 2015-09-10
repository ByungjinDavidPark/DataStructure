#include<stdlib.h>
#include<stdio.h>


struct tree{
    int data;
    struct tree *right, * left;
};
typedef struct tree node;


int main()
{
    int key, num, choice;

    while(1)
    {
        printf("\n------------------------------");
        printf("\n1.Create binary tree\n");
        printf("2. Display the number of nodes \n");
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