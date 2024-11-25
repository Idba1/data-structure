#include <stdio.h>
#include <stdbool.h>

// Function to check if an array is sorted in ascending order
bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // Example arrays
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 3, 2, 1};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Check if arr1 is sorted
    if (isSorted(arr1, size1))
    {
        printf("Array 1 is sorted.\n");
    }
    else
    {
        printf("Array 1 is not sorted.\n");
    }

    // Check if arr2 is sorted
    if (isSorted(arr2, size2))
    {
        printf("Array 2 is sorted.\n");
    }
    else
    {
        printf("Array 2 is not sorted.\n");
    }

    return 0;
}
