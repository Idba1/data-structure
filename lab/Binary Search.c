#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if the target is at mid
        if (arr[mid] == target)
        {
            return mid;
        }

        // If the target is greater than mid, discard the left half
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        // If the target is smaller than mid, discard the right half
        else
        {
            right = mid - 1;
        }
    }

    // If target is not found
    return -1;
}

int main()
{
    // Sample sorted array
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    // Perform binary search
    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        printf("Element %d found at index %d.\n", target, result);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
