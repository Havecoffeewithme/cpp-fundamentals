#include <iostream>


int main(){

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Mr Bean"};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    std::cout << " \n";
    std::cout << "***************************\n";
    std::cout << " \n";

    char grades[] = {'A', 'B', 'C','F'};

    for(char grade : grades){
        std::cout << grade << '\n';
    }

    return 0;
}