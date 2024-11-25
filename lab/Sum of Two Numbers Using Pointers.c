#include <stdio.h>

// Function to calculate the sum of two numbers using pointers
int sumUsingPointers(int *a, int *b)
{
    return *a + *b; 
}

int main()
{
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to calculate the sum using pointers
    int result = sumUsingPointers(&num1, &num2);

    // Output the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
