#include<iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int main(){
    // Luhn Algorithm Implementation
    // The Luhn algorithm is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers.
    int result = 0;
    std::string cardNumber;
    std::cout << "Enter the card number: ";
    std::cin >> cardNumber;
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    // The Luhn algorithm checks if the sum of the digits is divisible by 10
    if(result % 10 == 0){
        std::cout << "The card number is valid:  "<<cardNumber << std::endl;
    }else{
        std::cout << "The card number is 'NOT' valid: "<<cardNumber << std::endl;
    }
    // The Luhn algorithm is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers.
    return 0;
}
// The Luhn algorithm is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers.
// It was created by IBM scientist Hans Peter Luhn in 1954. The algorithm is designed to protect against accidental errors, such as a mistyped digit, and is not intended to provide security against malicious attacks.
int getDigit(const int number){

    return number % 10 + ( number / 10 % 10); // This will return the sum of the digits of the number
    // For example, if number is 18, it will return 1 + 8 = 9
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() -1; i >= 0; i-=2){
        sum += cardNumber[i] -'0'; // Convert char to int
    } 

    return sum;
} 
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() -2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] -'0') * 2);
    } 

    return sum;
}