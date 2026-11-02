#include <stdio.h>

int main()
{
    //Declare the size
    int size, i, length=0, found=0, key;

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

    //Input the value which the user find in the araay
    printf("Enter the Element which do you want to search: ");
    scanf("%d", &key);

    //Linear Seaching Algorithm
    for(i=0; i<length; i++)
    {
        if(arr[i] == key)
        {
            printf("Element %d found at Index arr[%d]\n", key, i);
            found=1;
            break;
        }
    }
        if(found == 0)
        {
            printf("Element %d not found in the array\n", key);
        }
    

    return 0;
}