#include <stdio.h>

// Function to find and print even numbers in the array
void findEvenNumbers(int arr[], int size)
{
    printf("Even numbers: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        { // Check if the element is even
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    // Sample array
    int arr[] = {10, 21, 33, 43, 54, 65, 76};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find and display even numbers
    findEvenNumbers(arr, size);

    return 0;
}
