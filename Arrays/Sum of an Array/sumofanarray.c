#include <stdio.h>

int main()
{
    //Declare the size
    int size, i, sum=0;

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
        sum = sum + arr[i];
    }

    //Output the elements of an array
    printf("Entered %d elemets :- \n", size);
    for(i=0; i<size; i++)
    {
        printf("Element arr[%d] = %d\n", i, arr[i]);
    }

    //Sum of an array
    printf("Sum of an Array is %d\n", sum);
    



    return 0;
}