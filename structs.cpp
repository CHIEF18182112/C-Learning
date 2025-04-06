#include<iostream>

struct Student{
    std::string name;
    int age; 
    bool enrolld;   
};
/**
 * @brief The main function of this program.
 *
 * This program creates two student objects, one with initial values and one with
 * default values. It then prints the values of the students to the console.
 *
 * @return 0 if the program runs successfully.
 */
/**
 * @brief Main function of this program.
 *
 * This program creates two student objects, one with initial values and one with
 * default values. It then prints the values of the students to the console.
 *
 * @return 0 if the program runs successfully.
 */
int main(){


    Student student1 = {"Rahul", 20, true};
    Student student2;
    student2.name = "John Doe";
    student2.age = 30;
    student2.enrolld = false;

    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Age: " << student1.age << std::endl;
    std::cout << "Enrolled: " << student1.enrolld << std::endl; 

    std::cout << "Name: " << student2.name << std::endl;
    std::cout << "Age: " << student2.age << std::endl;
    std::cout << "Enrolled: " << student2.enrolld << std::endl;


    return 0;
}