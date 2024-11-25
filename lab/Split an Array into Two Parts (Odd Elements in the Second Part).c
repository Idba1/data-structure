#include <stdio.h>

// Function to split the array into even and odd parts
void splitArray(int arr[], int size, int evenArr[], int *evenSize, int oddArr[], int *oddSize)
{
    *evenSize = 0;
    *oddSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[*evenSize] = arr[i];
            (*evenSize)++;
        }
        else
        {
            oddArr[*oddSize] = arr[i];
            (*oddSize)++;
        }
    }
}

int main()
{
    // Original array
    int arr[] = {10, 15, 20, 25, 30, 35, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Arrays to hold even and odd elements
    int evenArr[size], oddArr[size];
    int evenSize, oddSize;

    // Split the array into even and odd parts
    splitArray(arr, size, evenArr, &evenSize, oddArr, &oddSize);

    // Print the even array
    printf("Even elements: ");
    for (int i = 0; i < evenSize; i++)
    {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    // Print the odd array
    printf("Odd elements: ");
    for (int i = 0; i < oddSize; i++)
    {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}
