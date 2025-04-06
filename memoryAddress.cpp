#include<iostream>

void swap(std::string &x, std::string &y);

int main(){
    // std::string name = "Rahul";

    // int age = 20;
    // bool isStudent = true;

    // std::cout << "Name: " << &name << std::endl;
    // std::cout << "age: " << &age << std::endl;
    // std::cout << "isStudent: " << &isStudent << std::endl;


    std::string x = "kool-Aid";
    std::string y = "wattermelon";
    std::string temp;

    swap( x, y);


    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;


    return 0;
}


void swap(std::string &x, std::string &y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}