#include <stdio.h>

// Function to find and print odd numbers in the array
void findOddNumbers(int arr[], int size)
{
    printf("Odd numbers: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        { // Check if the element is odd
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    // Sample array
    int arr[] = {11, 21, 32, 43, 54, 65, 76};
    int size = sizeof(arr) / sizeof(arr[0]); 

    // Find and display odd numbers
    findOddNumbers(arr, size);

    return 0;
}
