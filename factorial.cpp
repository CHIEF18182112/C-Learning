// This program calculates the factorial of a number using both iterative and recursive approaches
#include<iostream> // Include library for input and output operations

// Function declaration for calculating factorial iteratively
int factorial_iterative(int n);

// Main function
int main(){
    // Output the factorial of 5 using the iterative factorial function
    std::cout << factorial_iterative(5);

    // Output the factorial of 5 using the recursive factorial function
    std::cout << factorial_recursive(5);
}

// Function definition for calculating factorial iteratively
int factorial_iterative(int n){
    int result = 1; // Initialize the result as 1
    // Loop from 1 to n (excluding n) to calculate factorial
    for (int i = 1; i < n; i++){
        result *= i; // Multiply result by the current number
    }
    return result; // Return the final result
}

// Function definition for calculating factorial recursively
int factorial_recursive(int n){
    // Base case: if n is 1, return 1
    if (n == 1){
        return 1;
    }
    // Recursive case: multiply n by the factorial of (n-1)
    return n * factorial_recursive(n-1);
}
