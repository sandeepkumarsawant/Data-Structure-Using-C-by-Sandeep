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

void insertAtEnd(int value)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;

    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

int main()
{
    createLinkedList(10);
    createLinkedList(20);
    createLinkedList(30);
    createLinkedList(40);
    insertAtEnd(50);
    insertAtEnd(60);
    insertAtEnd(70);
    printLinkedlist(head);

    return 0;
}