#include <iostream>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = (rand() % 20) + 1;

    std::cout << "***********NUMBER GUESSING GAME****************\n";

    do{
        std::cout << "ENTER A GUESS BETWEEN ( 1 - 20 ) : ";
        std::cin >> guess;
        tries++; 

        if(guess > num){
            std::cout << "You are high!\n";
        }else if(guess < num){
            std::cout << "You are low!\n";
        }else{
            std::cout << "YOU ARE CORRECT : NUMBER OF TRIES " << tries << '\n';
        }
    

    } while(guess != num);
    
    std::cout << "***********END GAME****************\n";

    return 0;



}