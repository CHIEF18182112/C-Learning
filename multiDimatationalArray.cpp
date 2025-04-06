#include<iostream>
#include<array> 
#include<string>



int main(){

    // 2D array

    std::string cars[][3] =  
     { {"Mustang", "Escape", "F-150"},
       {"corvette", "Camaro", "Silverado"}, 
       {"Challenger", "Charger", "Ram"} };
                                
    int row = sizeof(cars)/sizeof(cars[0]);
    int col = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            std::cout << cars[i][j] << " ";
        }
        
        std::cout << std::endl;
    }

    return 0;
}