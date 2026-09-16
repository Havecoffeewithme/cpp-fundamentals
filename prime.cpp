#include <iostream>
// checking if a number is a prime number.  

int main(){

    int i, n , count = 0; 

    std::cout<< "Enter n : ";
    std::cin >> n;

    for(i = 1; i <= n ; i++ ){

        if(n % i == 0){
            count++;
        }
    }

    if(count == 2) std::cout <<"Its a prime number";
    else std::cout << "Not a prime number";

    return 0; 
}