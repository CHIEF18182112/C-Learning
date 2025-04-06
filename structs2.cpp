#include<iostream>
#include<string>



// Define a struct to represent a car with its model, colour and year
struct car
{
    std::string model;
    std::string colour;
    int year;
};

// Function to print the details of a car
void printCarDetails(car &car){
    // Print the memory address of the car
    std::cout << "Memory address of the car: " << &car << std::endl;

    // Print the details of the car
    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Colour: " << car.colour << std::endl;
    std::cout << "Year: " << car.year << std::endl;
}

// Function to paint a car with a given colour
void paintCar(car &car, std::string colour){
    // Update the colour of the car to the given colour
    car.colour = colour;
}

int main(){

    // Create a car with its model, colour and year
    car car1 = {"Mustang", "Red", 2022};

    // Create another car with its model, colour and year
    car car2;
    car2.model = "Corvette";
    car2.colour = "Blue";
    car2.year = 2023;

    // Print the details of the first car
    printCarDetails(car1);

    // Paint the first car with a different colour
    paintCar(car1, "Green");

    // Print the details of the second car
    printCarDetails(car2);

    // Paint the second car with a different colour
    paintCar(car2, "Yellow");

    // Print the details of the first car again
    printCarDetails(car1);

    // Print the memory address of the first car
    std::cout << "Memory address of the first car: " << &car1 << std::endl;

    // Print the details of the second car again
    printCarDetails(car2);

    // Print the memory address of the second car
    std::cout << "Memory address of the second car: " << &car2 << std::endl;

    return 0;
}
