#include<iostream>

/**
 * @brief Demonstrates dynamic memory allocation in C++.
 * 
 * This program prompts the user to enter the number of grades they have, allocates
 * memory for storing those grades, collects the grades from the user input, and
 * then displays each grade. After processing, it deallocates the dynamically
 * allocated memory to prevent memory leaks.
 */

int main(){

    // int *pNum = NULL;

    // pNum = new int;

    // *pNum = 21;

    // std::cout << *pNum << std::endl; //value
    // std::cout << pNum << std::endl;  //address

    // delete pNum;

    
    char *pGrads = NULL;
    int size;

    // Ask user for the number of grades and store it in the size variable
    std::cout<< "How many grads do you have?" << std::endl;
    std::cin >> size;

    // Dynamically allocate memory for the size of the grades
    pGrads = new char[size];

    // Collect grades from the user input
    for(int i = 0; i < size; i++){
        std::cout<<"Enter grade for student #"<<i+1<<std::endl;
        std::cin >> pGrads[i];
    }

    // Display each grade
    for(int i = 0; i < size; i++){
        std::cout<<"Grade for student #"<<i+1<<" is "<<pGrads[i]<<std::endl;
    }

    // Deallocate the dynamically allocated memory to prevent memory leaks
    delete[] pGrads;
    
}