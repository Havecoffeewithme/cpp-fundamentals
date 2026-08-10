#include <iostream>


int main(){

    // switch staments an alternate to using many "else if" statements 

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month)
    {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is february";
            break;
        case 3:
            std::cout << "It is March";
            break;
        default:
            std::cout << "Please ENTER numbers between (1 - 12) ";

    
    }


    return 0; 

}