
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    int x;
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data (-1 for no data): ");
    scanf("%d", &x);

    if (x == -1)
    {
        free(newnode);
        return NULL;
    }

    newnode->data = x;

    printf("Enter left child of %d\n", x);
    newnode->left = create();

    printf("Enter right child of %d\n", x);
    newnode->right = create();
    return newnode;
}

int main()
{
    struct node *root;
    root = NULL;
    root = create();

    return 0;
}
