#include<iostream>




void printinfo(const std::string name,const int age);


int main()
{
    // const int a = 10; // a is a constant variable
    // const int *p = &a; // p is a pointer to a constant integer
    // int *const q = &a; // q is a constant pointer to an integer

    // std::cout << "Value of a: " << a << std::endl;
    // std::cout << "Value pointed by p: " << *p << std::endl;
    // std::cout << "Value pointed by q: " << *q << std::endl;


    std::string name = "John Doe";
    int age = 30;

    printinfo(name, age);
    return 0;
}

void printinfo(const std::string name,const int age){

    //int age = 25; // This will cause an error because age is already defined as a parameter
    //std::string name = "Jane Doe"; // This will also cause an error because name is already defined as a parameter
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}