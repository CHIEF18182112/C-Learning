#include<iostream>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char playerChoice, char computerChoice);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    showChoice(player);
    computer = getComputerChoice();
    chooseWinner(player, computer);




    return 0;

}


char getUserChoice(){

    char player;
    do{
        std::cout<<"Make a wise choice !!"<<std::endl;
        std::cout <<"Enter your choice: "<<std::endl;
        std::cout<<"'r' for rock"<<std::endl;
        std::cout<<"'p' for Papre"<<std::endl;
        std::cout<<"'s' for Seaser "<<std::endl;
        std::cin >> player;
        
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
    
}
char getComputerChoice(){
    srand(time(0)); // Seed the random number generator
    int num = rand() % 3 +1;

    switch (num)
    {
    case 1:
        std::cout<<"Computer chose: Rock"<<std::endl;
        return 'r';
        
        break;
        case 2:
        std::cout<< "Computer chose: Paper"<<std::endl;
        return 'p';
        
        break;
        case 3:
        std::cout<<"Computer chose: Seaser"<<std::endl;
        return 's';
        
        break;
    default:
        break;
    }

    return 0;
}

void showChoice(char choice){

    switch (choice)
    {
    case 'r':
        std::cout<<"You chose: Rock"<<std::endl;
        
        
        break;
    case 'p':
        std::cout<<"You chose: Paper"<<std::endl;

        
        
        break;
    case 's':       
        std::cout<<"You chose: Seaser"<<std::endl;
        
        
        break;
    
    default:
        break;
    }
    
}

void chooseWinner(char playerChoice, char computerChoice){

    switch (playerChoice)
    {
    case 'r': if(computerChoice == 'r'){
        std::cout<<"It's a tie!"<<std::endl;
    }else if(computerChoice == 'p'){
        std::cout<<"Computer wins!"<<std::endl;
    }else if(computerChoice == 's'){
        std::cout<<"You win!"<<std::endl;
    }
        break;
    case 'p': if(computerChoice == 'r'){
        std::cout<<"You win!"<<std::endl;
    }else if(computerChoice == 'p'){
        std::cout<<"It's a tie!"<<std::endl;
    }else if(computerChoice == 's'){
        std::cout<<"Computer wins!"<<std::endl;
    }    
        break;    
    case 's': if(computerChoice == 'r'){
        std::cout<<"Computer wins!"<<std::endl;
    }else if(computerChoice == 'p'){    
        std::cout<<"You win!"<<std::endl;        
    }else if(computerChoice == 's'){
        std::cout<<"It's a tie!"<<std::endl;
    }
        break;
        
        
    
    default:
        break;
    }

}