#include <iostream>


int main(){

    int number ; 

    std:: cout << "Enter the number you want to count to: ";
    std::cin >> number;

    // dont forget to initialize 
    int i = 0; 
    while (i <= number)
    {
        std::cout << i << "\n" ;
        i++;
    }


    return 0;
}