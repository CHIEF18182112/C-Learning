#include<iostream>


class Animal{
    public: 
        bool alive =true;
        void eat(){
            std::cout <<"This animal is eating"<<std::endl;
        }
};
    
class Dog: public Animal{
    public:
        void bark(){
            std::cout<<"This dog is barking"<<std::endl;
        }
    
};    
class Cat: public Animal{
    public:
        void meow(){
            std::cout<<"This cat is meowing"<<std::endl;
        }
};

int main(){
    Cat cat;
    Dog dog;

    std::cout<<dog.alive<<std::endl;
    dog.eat();
    dog.bark();


    cat.eat();
    cat.meow();
    cat.alive = false;
    

    return 0;
}