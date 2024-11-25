#include <stdio.h>

// Function to find the maximum element in the array
int findMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    // Sample array
    int arr[] = {10, 20, 130, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the maximum element in the array
    int maxElement = findMax(arr, size);

    // Display the maximum element
    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}
