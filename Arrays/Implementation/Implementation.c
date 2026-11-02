#include <stdio.h>

int main()
{
    //Declare the size
    int size, i;

    //Input the size of an array
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    //Declare the array
    int arr[size];

    //Input the element 
    printf("Enter %d elemets :- \n", size);
    for(i=0; i<size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }


    return 0;
}