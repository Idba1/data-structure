#include <stdio.h>

// Function to insert a number at a specific position in the array
void insertNumber(int arr[], int *size, int capacity, int index, int value)
{
    if (*size >= capacity)
    {
        printf("Array is full, cannot insert\n");
        return;
    }
    if (index < 0 || index > *size)
    {
        printf("Invalid index\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[index] = value;
    (*size)++;
}

int main()
{
    // Sample array
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int capacity = 10;

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert number 99 at index 2
    insertNumber(arr, &size, capacity, 2, 99);

    // Display the updated array
    printf("Updated Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
