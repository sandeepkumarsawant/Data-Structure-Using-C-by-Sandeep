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

    newnode = (struct node *)malloc(sizeof(struct node));
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

void insertAtBeginning(int value)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    // Point newnode to the current head, then update head
    newnode->next = head;
    head = newnode;
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


void reversedLinkedlist(struct node *head)
{
    struct node *temp, *currentnode, *nextnode;

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


void reverseLinkedList(struct node *head)
{
    struct node *prevnode, *currentnode, *nextnode;
    // prevnode = (struct node *)malloc(sizeof(struct node));
    // currentnode = (struct node *)malloc(sizeof(struct node));
    // nextnode = (struct node *)malloc(sizeof(struct node));
    prevnode = NULL;
    currentnode = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}

int main()
{
    createLinkedList(10);
    createLinkedList(20);
    createLinkedList(30);
    createLinkedList(40);
    insertAtBeginning(5);
    insertAtBeginning(1);
    printLinkedlist(head);
    reverseLinkedList(head);
    printLinkedlist(head);
    reversedLinkedlist(head);

    struct node *tempp;
    tempp = (struct node *)malloc(sizeof(struct node));

    tempp = head;

    while (tempp != NULL)
    {
        printf("%d --> ", tempp->data);
        tempp = tempp->next;
    }

    return 0;
}