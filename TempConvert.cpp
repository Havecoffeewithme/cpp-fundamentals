#include <iostream>


int main()
{
    double temp;
    char unit;

    std::cout <<"*******************Temperature conversion*********************\n" ;

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius \n";
    std:: cout << "What unit would you like to convert to : ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std:: cin >> temp;

        double temp_in_fahren = (1.8 * temp) + 32.0 ;
        std::cout << "Temperature is: " << temp_in_fahren << " F\n";
    }
    else if( unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fanrenheit\n";
        std:: cin >> temp;

        double temp_in_celcius = ( temp - 32 ) / 1.8 ;
        std::cout << "Temperature is: " << temp_in_celcius << " C\n";
    }
    else{
        std::cout << "Please enter in only C or F\n";
    }


    std::cout <<"**************************** OUT *****************************\n" ;



}