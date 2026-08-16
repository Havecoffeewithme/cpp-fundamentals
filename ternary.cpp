#include <iostream>

int main(){

int grade = 75;
int number = 9;

bool hungry = true;

grade >= 60 ? std::cout << "You pass" : std::cout<< "fail";

number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN ";

hungry ? std:: cout << "You are hungry" : std::cout << "You are full";

return 0;

}