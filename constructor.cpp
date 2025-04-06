#include<iostream>



class stundent{
  public:
    std::string name;
    int age;
    double gpa;

    stundent(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

};

int main(){

    stundent student1("Rahul", 20, 3.5);
    std::cout<<student1.name<<std::endl;
    std::cout<<student1.age<<std::endl;
    std::cout<<student1.gpa<<std::endl;

}