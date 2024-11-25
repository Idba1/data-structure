#include <stdio.h>

// Function to find and print positive numbers in the array
void findPositiveNumbers(int arr[], int size)
{
    printf("Positive numbers: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        { // Check if the element is positive
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    // Sample array
    int arr[] = {-10, 21, -32, 43, -54, 65, -76};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find and display positive numbers
    findPositiveNumbers(arr, size);

    return 0;
}
