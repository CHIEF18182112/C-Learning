#include<iostream>
#include<string>

// double getTotal(double prices[], int size);

int search(std::string myFood[], int size, std::string element);
int main(){

    // std::string car[] ={ "Mustang" ,"BMW", "Mercedes", "Toyota"};

    // std::cout<<car[0]<<std::endl;

    // std::string name = "JONATHAN";

    // double gaps[]  ={ 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0};

    // std::cout << sizeof(gaps) / sizeof(gaps[0]) << std::endl;

    // std::string name[5] = {"JONATHAN", "JAMES", "JOHN", "JACK", "JERRY"};

     //    std::cout<<name[0]<<std::endl;

    // for (int  i = 0; i < sizeof(name)/sizeof(std::string); i++)
    // {
    //     std::cout<<name[i]<<std::endl;
    // }
    
    // char grads [] = {'A', 'B', 'C', 'D', 'F'};

    // for (int i =0 ; i< sizeof(grads)/sizeof(char); i++){
    //     std::cout<<grads[i]<<std::endl;
    // }



    //for eahc loop
    //  std::string student[] = {"JONATHAN", "JAMES", "JOHN", "JACK", "JERRY"};
    // for(std::string student : student){
    //     std::cout<<student<<std::endl;
    // }

    // double prices[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0};
    
    // int size = sizeof(prices)/sizeof(prices[0]);

    // double total = getTotal(prices , size);

    // std::cout<<"$"<<total<<std::endl;


//    int numbers[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   
    std::string foods[] = {"pizza", "burger", "fries", "soda", "salad"};
    int size = sizeof(foods)/sizeof(foods[0]);

    int index;
    std::string myFood;
    std::cout <<"enter element to sesarch for: ";
    std::getline(std::cin, myFood);
    index = search(foods, size, myFood);
    
    if (index != -1){
        std::cout<<myFood<<" found at index "<<index<<std::endl;
    }else{
        std::cout<<myFood<<" not found"<<std::endl;
    }


    return 0;
}

// double getTotal(double prices[], int size){
//     double total = 0;
//     for (int i = 0; i < size; i++){
//         total+=prices[i];
//     }

//     return total;
// }

int search(std::string myfoods[], int size, std::string element){
    for (int i =0; i<size; i++)
    {
        if (myfoods[i] == element){
            return i;
        }

    }
    return -1;
    // -1 means not found
}