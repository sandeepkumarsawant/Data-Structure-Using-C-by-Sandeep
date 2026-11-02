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
    //declare new node
    struct node *newnode;

    //allocate memeory 
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;


    //check condition
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

void insertAtBeginning(int value)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    
    // Point newnode to the current head, then update head
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(int value)
{
    //declare new node 
    struct node *newnode;

    //allocate the memory
    newnode = (struct node*)malloc(sizeof(struct node));

    //assign the value of pointer 
    newnode->data = value;
    newnode->next = NULL;

    //check conditions 
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
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
    printLinkedlist(head);
    insertAtBeginning(5);
    printLinkedlist(head);
    insertAtEnd(50);
    printLinkedlist(head);

    return 0;
}