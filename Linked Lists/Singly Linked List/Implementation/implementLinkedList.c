#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *newnode, *temp;

    head = (struct node *)malloc(sizeof(struct node));

    head = 0;
    int choice;

    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data to enter into the node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue(0,1): ");
        scanf("%d", &choice);
    }

    temp = head;
    while (temp != 0)
    {
        printf("%d ---> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
