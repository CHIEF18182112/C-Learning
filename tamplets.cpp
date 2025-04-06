 #include<iostream>

// int max(int x, int y){
//      This function takes two integers and returns the maximum of the two
//     return x > y ? x : y;
// }
// double max(double x, double y){
//      This function takes two doubles and returns the maximum of the two
//     return x > y ? x : y;
// }
// char max(char x, char y){
//      This function takes two characters and returns the maximum of the two
//     return x > y ? x : y;
// }

// Tampletes are a way to allow functions and classes to work on generic data types.
// This is done by adding a template parameter to the function or class declaration.
// The template parameter is a place holder for the type that will be used when the function or class is instantiated.
// The type is specified when the function or class is used.

// In this example, the max function is a template function that takes two parameters of any type.
// The type of the parameters is specified when the function is called.
// The function returns the maximum of the two parameters.
template <typename T, typename U>
auto max (T x, U y){
    // This function takes two parameters of any type and returns the maximum of the two
    return x > y ? x : y;
}

int main(){
    // This example shows how to use the max function with different types
    std::cout << max(1.1, 2.1) << std::endl;
    std::cout << max('4', '2') << std::endl;
    std::cout << max(1, 2.01) << std::endl;

    return 0;
}

