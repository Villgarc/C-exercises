// Write a program in C++ to check the upper and lower limits of char,integer and long integer.

#include <iostream>
#include <climits>

int main(){
    std::cout << "The char maximum value is " << CHAR_MAX << '\n';
    std::cout << "The char minimum value is " << CHAR_MIN << '\n';
    std::cout << "The int maximum value is " << INT_MAX << '\n';
    std::cout << "The int minimum value is " << INT_MIN << '\n';
    std::cout << "The long int maximum value is " << LONG_MAX << '\n';
    std::cout << "The long int minimum value is " << LONG_MIN << '\n';
    return 0;
}