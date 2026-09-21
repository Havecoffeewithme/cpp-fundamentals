#include <iostream>


int main()
{
    int i, sum = 0;
    int total = 0;
    int age[7] = {3, 6, 33, 55, 66, 4};

    //. sum of the values in the array. 
    for(i = 0; i < 7 ; i++)
    {
        std::cout << age[i] << std::endl;
        sum = sum + age[i];
    }

    std::cout << sum; 
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;

    std::cout << "This is the end " << std::endl;

    for(auto x : age){
        std::cout << x << '\n';
        total = total + x; 
    }

    std::cout << total << '\n';


}