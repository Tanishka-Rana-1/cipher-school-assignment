#include <iostream>
#include <string>

int main() {
   string a, b, c;

   
    std::cout << "Enter the first string: ";
    std::getline(std::cin, a);


    std::cout << "Enter the second string: ";
    std::getline(std::cin, b);


    c = a + b;


    std::cout << "Concatenated string: " << c<< std::endl;

    return 0;
}
