#include <stdio.h>

// Function to delete an element at a specific index
void deleteElement(int arr[], int *size, int index)
{
    if (index >= 0 && index < *size)
    {
        // Shift elements to the left to fill the gap
        for (int i = index; i < *size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    }
    else
    {
        printf("Invalid index\n");
    }
}

int main()
{
    // Sample array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete element at index 2 (which is 30)
    deleteElement(arr, &size, 2);

    // Display the updated array
    printf("Updated Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
