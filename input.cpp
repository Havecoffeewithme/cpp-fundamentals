#include <iostream>


int main(){


    std::string name;
    int age;
    std:: string address;

    std:: cout << "Whats your name? : " ;
    std::getline(std::cin, name);

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    std::cout << "Where do you stay? : " << '\n';
    std::cin>> address;
    std::cout << address << " : is a nice place" ;

    return 0;


}