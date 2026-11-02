#include <stdio.h>

int main()
{
    // Declare the size
    int size, i, length = 0, low = 0, high, mid, key, found = 0;

    // Input the size of an array
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    // Declare the array
    int arr[size];

    // Input the element
    printf("Enter %d elemets :- \n", size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Output the elements of an array
    printf("Entered %d elemets :- \n", size);
    for (i = 0; i < size; i++)
    {
        printf("Element arr[%d] = %d\n", i, arr[i]);
    }

    // Length of an array
    length = sizeof(arr) / sizeof(arr[0]);

    high = length - 1;

    // Input the element which the user want to search
    printf("Enter the element which do you want to search: ");
    scanf("%d", &key);

    // Binary Search Algorithm
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Elements %d id found at arr[%d]\n", key, mid);
            found = 1;
            break;
        }
        else if (arr[mid] > key)
        {
            low = mid + 1;
        }
        else

        {
            high = mid - 1;
        }       
    }
    if (found == 0)
        {
            printf("Element %d is not found in the array: ", key);
        }

    return 0;
}