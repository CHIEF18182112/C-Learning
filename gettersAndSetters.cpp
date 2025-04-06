#include<iostream>
#include<string>    

class Stove {
    private:
        int temperature = 0; // Default temperature
    public:
        // Getter method to retrieve the temperature
        int getTemperature() {
            return temperature; 
        }

        // Setter method to set the temperature
        void setTemperature(int temp) {
            if (temp >= 0 && temp <= 500) { // Valid temperature range
                temperature = temp;
            } else {
                std::cout << "Invalid temperature! Please set a value between 0 and 500." << std::endl;
            }
        }
};

int main() {
    Stove stove;

    // Set the temperature
    stove.setTemperature(250);

    // Get and print the temperature
    std::cout << "Current temperature: " << stove.getTemperature() << "°C" << std::endl;

    // Try setting an invalid temperature
    stove.setTemperature(600);

    return 0;
}