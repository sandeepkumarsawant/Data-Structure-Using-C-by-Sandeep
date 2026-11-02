#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

// Global pointers so head and temp persist across function calls
struct node *head = NULL;
struct node *temp = NULL;

void createLinkedList(int value)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = temp = newnode;
    }
    else 
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void printLinkedlist(struct node *head)
{
    struct node *temp;

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


void insertAfterLocation(int loc, int value)
{
    int i = 1;
    struct node *newnode;

    // Traverse to find the node at the specified location
    temp = head;
    while (i < loc && temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    // If position is beyond the length of the list or list is empty
    if (temp == NULL)
    {
        printf("Invalid location! Location %d does not exist.\n", loc);
        return;
    }

    // Allocate memory and link the new node
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    createLinkedList(10);
    createLinkedList(20);
    createLinkedList(30);
    createLinkedList(40);
    insertAfterLocation(4, 50);
    printLinkedlist(head);

    return 0;
}