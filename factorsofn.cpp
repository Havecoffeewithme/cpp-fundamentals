#include <iostream>

// writing a programme to print out the factors of a number 

int main()
{
    int number, i;

    std::cout << "Enter the number n ";
    std::cin >> number;

   for(i = 1; i <= number ; i++)
   {
    if(number % i == 0)
    {
        std::cout << i << std::endl; 
    }

   }

    return 0;

}