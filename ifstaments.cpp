#include <iostream>


int main(){

    int age;

    std::cout << "Enter your age: "; 
    std:: cin >> age ; 

    if(age >= 99){
        std::cout << "You are told to be here";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site";
    }
    else if(age < 0){
        std::cout<< "You havent been born yet!";

    } 
    else{
        std::cout << "You are not old enough!";
    }
    

    return 0;

}
