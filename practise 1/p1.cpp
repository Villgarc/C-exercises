// Write a program in C++ to check the upper and lower limits of char,integer and long integer.

#include <iostream>
#include <climits>

int main(){
    std::cout << "The char maximum size is " << CHAR_MAX << '\n';
    std::cout << "The char minimum size is " << CHAR_MIN << '\n';
    std::cout << "The int maximum size is " << INT_MAX << '\n';
    std::cout << "The int minimum size is " << INT_MIN << '\n';
    std::cout << "The long int maximum size is " << LONG_MAX << '\n';
    std::cout << "The long int minimum size is " << LONG_MIN << '\n';
    return 0;
}