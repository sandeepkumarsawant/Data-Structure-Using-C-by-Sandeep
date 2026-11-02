#include <stdio.h>

int main()
{
    //Declare the size
    int size, i, length=0, n;

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

    //Output the elements of an array
    printf("Entered %d elemets :- \n", size);
    for(i=0; i<size; i++)
    {
        printf("Element arr[%d] = %d\n", i, arr[i]);
    }

    //Length of an array
    length = sizeof(arr) / sizeof(arr[0]);

    //Print the length of array
    printf("Length of Array is %d", length);



    return 0;
}