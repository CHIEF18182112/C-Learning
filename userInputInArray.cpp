#include<iostream>
#include<string>


/*
 * This program shows how to take user input in an array of strings
 * and how to quit the program when the user enters 'q'
 */

int main(){

    std::string food[5];

    int size = sizeof(food)/sizeof(food[0]);
    std::string temp;
    for (int  i = 0; i < size; i++){
        std::cout <<"Enter Food item you like or 'q' to quit #"<<i<<std::endl;
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        } else {
            food[i] = temp;
        }
    }

    std::cout << "You entered: " << std::endl;
    for(int i = 0; i < size && !food[i].empty(); i++){
        std::cout << food[i] << std::endl;
    }

    return 0;
}
