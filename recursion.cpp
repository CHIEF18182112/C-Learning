// This program demonstrates both iterative and recursive approaches to walking a given number of steps

#include<iostream> // Include library for input and output operations

void walks(int steps); // Function prototype for iterative walk
void walk(int steps); // Function prototype for recursive walk

int main() {
    walk(100); // Call the recursive walk function with 100 steps
    return 0; // Return 0 to indicate successful execution
}

// Iterative function to simulate walking a given number of steps
void walks(int steps) {
    for(int i = 1; i <= steps; i++) { // Loop from 1 to the specified number of steps
        std::cout << "walk :" << i << std::endl; // Output the current step number
    }
}

// Recursive function to simulate walking a given number of steps
void walk(int steps) {
    if (steps > 0) { // Base case: if steps are greater than 0
        std::cout << "walk :" << steps << std::endl; // Output the current step number
        walk(steps - 1); // Recursive call with one less step
    }
}
