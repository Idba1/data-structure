#include <stdio.h>

// Function to swap two numbers using pointers and a temporary variable
void swapWithTemp(int *a, int *b)
{
    int temp = *a;
    *a = *b;  
    *b = temp; 
}

int main()
{
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Print the original numbers
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swapWithTemp(&num1, &num2);

    // Print the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
