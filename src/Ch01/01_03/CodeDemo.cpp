// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout <<"What's your name my friend? " << std::flush;
    std::cin >> str;
    std::cout <<"HELLO " << str;

    std::cout << std::endl << std::endl;
    return (0);
}
