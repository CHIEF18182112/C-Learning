#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>
#include<iomanip>

double deposit();
double widrow(double widrow);
void showBalance(double balance);
 
int main(){
std::cout<<"########################"<<std::endl;

int choice = 0;
double balance ;

do{

    std::cout<<"1. Show Balance"<<std::endl;
    std::cout<<"2. Deposit "<<std::endl;
    std::cout<<"3. widrow "<<std::endl;
    std::cout<<"Enter your choice: ";
    std::cout<<"4. Exit"<<std::endl;
    
    std::cin>>choice;

    std::cin.clear(); // Clear error flags
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input

    switch(choice){
    case 1:
        showBalance(balance);
    break;
    case 2:
        balance += deposit();
        showBalance(balance);
    break;
    case 3:
        balance -= widrow(balance);
        showBalance(balance);
    break;
    case 4:
        std::cout<<"Exit Thank You!"<<std::endl;
    break;
    default:
        std::cout<<"Invalid choice"<<std::endl;
    break;
    
    }

}while(choice != 4);


std::cout<<"#######################"<<std::endl;

    return 0;
}

void showBalance(double balance){
    std::cout<<"Your balance is:$ "<<std::setprecision(2)<<std::fixed<<balance<<std::endl;
}


double deposit(){
    double amount = 0;
    std::cout<<"Enter amount to deposit: ";
    std::cin>>amount;

    if(amount > 0){
        return amount;
    }else{
        std::cout<<"Invalid amount"<<std::endl;
        return 0;
    }
    
 
}
double widrow(double balance){
    double amount = 0;
    std::cout<<"Enter amount to widrow: ";
    std::cin>>amount;

    if(amount > 0 && amount <= balance){
        return amount;
    }else{
        std::cout<<"Invalid amount✖️"<<std::endl;
        return 0;

    }
}


