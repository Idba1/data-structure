#include <stdio.h>

// Function to find and print negative numbers in the array
void findNegativeNumbers(int arr[], int size)
{
    printf("Negative numbers: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
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

    // Find and display negative numbers
    findNegativeNumbers(arr, size);

    return 0;
}
