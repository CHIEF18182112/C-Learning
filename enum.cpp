#include<iostream>

// Enumerations are a way to define a set of named values
// They are useful for making code more readable and easier to maintain
enum days{sun=0,mun=1,tue=2,wed=3,thu=4,fri=5,sat=6};
 
int main(){
    // The switch statement is used to execute different blocks of code based on the value of a variable
    // In this case, we are using it to print out the name of the day of the week based on the value of the enum
    days today = days::sun; // Declare a variable of type 'days' and assign a value
    switch(today){
        // The case label is the value of the enum that we are checking against
        // The code inside the case block is executed if the value of the enum matches the case label
        case days::sun:
            std::cout<<"Sunday"<<std::endl;
            break;
        case days::mun:
            std::cout<<"Monday"<<std::endl;
            break;
        case days::tue:
            std::cout<<"Tuesday"<<std::endl;
            break;
        case days::wed:
            std::cout<<"Wednesday"<<std::endl;
            break;
        case days::thu:
            std::cout<<"Thursday"<<std::endl;
            break;
        case days::fri:
            std::cout<<"Friday"<<std::endl;
            break;
        case days::sat:
            std::cout<<"Saturday"<<std::endl;
            break;
        default:
            // The default block is executed if the value of the enum does not match any of the case labels
            // In this case, we are not doing anything in the default block
    }


    return 0;
}
