#include<iostream>



int main(){

    std::string name = "Rahul";
    int age = 20;

    std::string *pName = &name;
    int *pAge = &age;
    
    std::cout <<pName << std::endl;
    std::cout <<pAge << std::endl;

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;

    return 0;
}