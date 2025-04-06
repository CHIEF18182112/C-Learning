#include<iostream>


/*
 * This program shows the use of the fill algorithm
 * to fill a container with a particular value
 */
int main(){

    const int size = 100;
    std::string food[size];

    fill(food, food + (size/2), "chocolate");

    fill(food + (size/2), food + size, "Pazza");

    for(std::string item : food){
        std::cout << item << std::endl;
    }

    return 0;

}