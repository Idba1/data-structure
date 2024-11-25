#include <stdio.h>

// Function to replace an element at a specific index
void replaceElement(int arr[], int size, int index, int newValue)
{
    if (index >= 0 && index < size)
    {
        arr[index] = newValue;
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

    // Replace element at index 2 with value 100
    replaceElement(arr, size, 2, 100);

    // Display the updated array
    printf("Updated Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
