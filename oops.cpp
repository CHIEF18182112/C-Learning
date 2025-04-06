/**
 * @file oops.cpp
 * @brief A simple C++ program demonstrating basic Object Oriented Programming concepts.
 * @author Pawan Kumar
 * @date 2022-09-17
 */

#include <iostream>

/**
 * @brief A class representing a human.
 */
class human {
    public:
        int age; /**< The age of the human. */
        std::string name; /**< The name of the human. */
        std::string occupation; /**< The occupation of the human. */

        /**
         * @brief Allows the human to eat.
         */
        void eat() {
            std::cout << "humans can Eat!" << std::endl;
        }

        /**
         * @brief Allows the human to drink.
         */
        void drink() {
            std::cout << "humans can Drink!" << std::endl;
        }

        /**
         * @brief Allows the human to sleep.
         */
        void sleep() {
            std::cout << "humans can Sleep!" << std::endl;
        }
};


int main() {
    // human0 is a variable of class human
    human human0;
    human0.age = 27;
    human0.name = "pawan";
    human0.occupation = "Engineer";

    // human1 is a variable of class human
    human human1;
    human1.age = 20;
    human1.name = "Rahul";
    human1.occupation = "student";

    // human1 is a variable of class human
    std::cout << "Age: " << human1.age << std::endl;
    std::cout << "Name: " << human1.name << std::endl;
    std::cout << "Occupation: " << human1.occupation << std::endl;

    // humnan1 is a variable of class human
    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}
